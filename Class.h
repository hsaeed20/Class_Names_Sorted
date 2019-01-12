#ifndef CLASS_H
#define CLASS_H 

using namespace std;

class Node 
{
	string data; //allows data to be chosen when making or deleting a node

public:
	Node(); //constructor for node
	Node(string data); //used for node attributes for both file and inserting functions 

	string getData(); //used to obtain data
	void setData(string data); //used to set data

	Node *next;

};

class LinkedList {
public:
	Node* head; //starts at the beginning of the list
	Node* tail; //used at the end of the list


	LinkedList(); //default constructor
	~LinkedList(); //destructor
	void insertAtHead(string addData); //adds a node at the start
	void sortedinsert(string addData);
	void displayList(); //displays the list
};

#endif
