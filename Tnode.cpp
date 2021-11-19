
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Tnode{
public:
	string data;
	Tnode* ltree;
	Tnode* rtree;
	Tnode* ptree;

	Tnode(string data , Tnode* ptree = NULL, Tnode* ltree = NULL, Tnode* rtree = NULL) {

		this->data = data;
		this->ltree = ltree;
		this->rtree = rtree;
		this->ptree = ptree;

	}

	Tnode* getLeftTree() {
		return this-> ltree;
	}

	bool hasLeftTree() {
		return (this->ltree);
	}
	
	Tnode* getRightTree() {
		return this -> rtree;
	}

	bool hasRightTree() {
		return (this->rtree);
	}

	string getData() {
		return this->data;
	}

	bool hasChildren() {
		return this->ltree || this->rtree;
	}

	bool hasBothChildren() {
		return this - ltree && this->rtree;
	}

	bool hasparent() {
		return this->ptree;
	}

	void replaceNodeData(string value, Tnode* lc = NULL, Tnode* rc = NULL) {
		this->data = value;
		this->ltree = lc;
		this->rtree = rc;
		if (this->hasLeftTree()) {
			this->ltree->ptree = this;
		}
		if (this->hasRightTree()) {
			this->rtree->ptree = this;
		}
	}
	







};

