#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include "Class.h"

using namespace std;

LinkedList::LinkedList() {
	head = NULL;
	//sets all both pointers to zero
}

LinkedList::~LinkedList() {

}

void LinkedList::insertAtHead(string addData) {
	Node* n = new Node(addData); //has node data in new node
	n->next = NULL; //sets it to NULL to avoid confusion

	if (head != NULL) { //will check if there exist other nodes
		n->next = head; //directs pointer to head
		head = n; //set value equal to head
	}
	else {
		head = n; //create a new node by setting it to new value
	}
}

void LinkedList::sortedinsert(string addData)
{
	Node* n = new Node(addData);

	//inserting at empty list 
	if (head == NULL)
	{
		head = n;
	}
	else
	{
		//Traverse list to find insert location 
		Node* curr = head;
		Node* prev = NULL;

		while (curr != NULL)
		{
			if (curr->getData() >= n->getData()) //if the current node is greater than the new node
			{
				break; //will break out of loop once it reaches position
			}
			else
			{
				prev = curr;
				curr = curr->next;
			}
		}
		//inserting at head
		if (curr == head)
		{
			n->next = head;
			head = n;
		}

		//inserting after the head
		else
		{
			n->next = curr;
			prev->next = n;
		}
	}

	
}


void LinkedList::displayList() {

	ofstream fout0; //used for overwriting the files
	fout0.open("students.txt", std::ios_base::trunc); //removes all info in the file
	fout0.close();

	ofstream fout;

	
	Node* temp = head;
	fout.open("students.txt", std::ios_base::app);
	if (temp == NULL)
	{
		return;
	}
	else
	{
		while (temp != NULL) { //increments through the list
			cout << temp->getData() << endl;
			fout << temp->getData() << endl;
			temp = temp->next; //goes through each node
		}
	}
	fout.close();
}

Node::Node() //constructor for node
{
	data = "";
}

Node::Node(string data) //node containing attribute for data
{
	this->data = data; 
}

string Node::getData() { //compares data
	return data; 
}

void Node::setData(string data) {
	this->data = data; 
}

