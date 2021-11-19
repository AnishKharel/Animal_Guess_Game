/*
---------------------------------------------------------
L8: Binary Tree Animal Guessing Game
Authors: Beau Schneider and Anish Kharel
Using Original Code written by Jan Pearce and Mario Nakazawa
The pourpose of this code is to make a program that can use a tree data structure to guess the users
choosen animals based on a series of yes or no questions.
---------------------------------------------------------
*/

#include "bin_tree.cpp";
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int main() {

	char readchar;
	//vector<str> memoryvect;
	string line;
	BinTree* tree = new BinTree();
	bool game = true;
	string answer;
	Tnode* currentnode;

	ifstream memoryfile("animallearning.txt"); // type that allows for both reading and writing to memoryfile

	if (memoryfile.is_open())
	{	

		int count = 0;
		vector <string> binvect;
		binvect.push_back(" ");
		currentnode = tree->getrootnode();
		while (getline(memoryfile, line))                 // puts all elements from the text file into the tree
		{	
			if (line != " ") {
				binvect.push_back(line);
			}
			

		}
		
		tree->setrootNode(tree->buildLevelTree(binvect, NULL, 1, binvect.size()));

		memoryfile.close();
		string lmao;
		cout << "For tis game only type [yes/no] as responces to the questions." << endl;
		cout << "Are you ready to play the game? ";
		cin >> lmao;
		if (lmao == "yes") {

			currentnode = tree->getrootnode();
			string a;

			while (game == true) {

				cout << tree->getsize();
				if (!currentnode->hasChildren()) {

					string new_question;
					string new_animal;
					string game_choice;
					string left_right;
					cout << currentnode->getData() << endl;
					cout << "IS this the correct animal?: ";
					cin >> game_choice;
					if (game_choice == "yes") {
						cout << "HA we win..!" << endl;
						game = false;
					}
					else {
						cout << "well darn..." << endl;
						cout << "create a new yes for no question for this animal: ";
						cin >> a;
						getline(cin, new_question);
						new_question = "QL" + a + new_question;
						cout << "what is the name of this new animal?: ";
						tree->build(new_question, currentnode, false);

						getline(cin, new_animal);
						new_animal = "GR" + new_animal;
						tree->build(new_animal, currentnode, true);

						ofstream learningfile("animallearning.txt");
						queue <Tnode*> q;
						Tnode* current;
						string line;

						if (learningfile.is_open()) {
							learningfile << " " << endl;
							q.push(tree->getrootnode());
							while (!q.empty()) {

								current = q.front();
								learningfile << current->getData() << endl;
								if (current->ltree != NULL) {
									q.push(current->ltree);
								}
								if (current->rtree != NULL) {
									q.push(current->rtree);
								}

								q.pop();

							}
							learningfile << " ";
						}
						else {
							cout << "error in recording new data!!" << endl;
						}
						learningfile.close();
					}


					
					currentnode = tree->getrootnode();
					cout << currentnode->getData() << endl;                                                                  // runs the game infinity for testing
					cout << "enter your answer here : ";
					cin >> answer;

				}
				else {

					cout << currentnode->getData() << endl;                                                                  // runs the game untill it is won/lost
					cout << "enter your answer here : ";
					cin >> answer;
				}


				if (answer == "yes") {
					currentnode = tree->traversetree(true, currentnode);
					// runs the game untill it is won/lost

				}
				if (answer == "no") {
					currentnode = tree->traversetree(false, currentnode);

				}
				if (answer == "quit") {
					game = false;
				}



			}
		}

		else {
			cout << "NOT A VAILD INPUT" << endl;

		}



	}
	else {
		cout << "Unable to open file";
	}

	cin >> readchar; // This is to keep screen open in some situations.
	return 0;
}

void writetreetofile(BinTree* tree) {

	ofstream learningfile("animalmemory.txt");
	queue <Tnode*> q;
	Tnode* current;
	string line;

	if (learningfile.is_open()) {
		
		q.push(tree->getrootnode());
		while (!q.empty()) {

			current = q.front();
			learningfile << current->getData() << endl;
			if (current->ltree != NULL) {
				q.push(current->ltree);
			}
			else {

			}
			if (current->rtree != NULL) {
				q.push(current->rtree);
			}

			q.pop();

		}
		
	}
	else {
		cout << "error in recording new data!!" << endl;
	}
	learningfile.close();


}
