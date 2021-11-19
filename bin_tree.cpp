
#include "Tnode.cpp"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class BinTree {
private:
	Tnode* rootnode;
	int size;

public:

	BinTree() {
		this->rootnode = NULL;
		this->size = 0;
	}

	Tnode* getrootnode() {
		return this->rootnode;
	}

	void setrootNode(Tnode* root) {
		this->rootnode = root;
	}

	void add(string question,Tnode* currentnode, bool direction = false) {
		if (this->rootnode) {
			implementadd(question, direction, currentnode);
		}
		else
			this->rootnode = new Tnode(question);
		this->size = this->size + 1;
	}

	void implementadd(string question, bool direction, Tnode* currentnode) {

		if (direction == false) {
			if (currentnode->hasLeftTree()) {
				implementadd(question, direction, currentnode->getLeftTree());
			}
			else {
				currentnode -> ltree = new Tnode(question, currentnode);	
			}
		}
		else {
			if (currentnode->hasRightTree()) {
				implementadd(question, direction, currentnode->getRightTree());
			}
				currentnode -> rtree = new Tnode(question, currentnode);
		}



	}

	void build(string data, Tnode* currentnode,bool direction) {
		if (!direction) {
			string a = currentnode->data;
			currentnode->replaceNodeData(data);
			this->add(a, currentnode, false);
			
			
			
		}
		else {
			this->add(data, currentnode, true);
		}
			
		this->size += 1;


	}
	int getsize() {
		return this->size;
	}
	Tnode* traversetree(bool directionalstate,Tnode* current) {
		
			if (directionalstate == true) {
				current = current->rtree;
				return current;
			}
			else {
				current = current->ltree;
				return current;

			}

	

	}
	
	Tnode* insert(string data) {
		Tnode* newnode = new Tnode(data);
		return newnode;
	}



	Tnode* buildLevelTree(vector <string> binvect, Tnode* rootnode, int i, int n) {

		if (i < n) {

			
			Tnode* currentnode = this->insert(binvect[i]);
			rootnode = currentnode;

			rootnode->ltree = buildLevelTree(binvect, rootnode->ltree, 2 * i , n);

			rootnode->rtree = buildLevelTree(binvect, rootnode->rtree, 2 * i + 1 , n);


		}
		return rootnode;


	}







};


 









