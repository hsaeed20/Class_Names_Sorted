#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include "Class.h"

using namespace std;

int main() {

	LinkedList Haroon;
	string line; //used to traverse lines in file
	string data; //contains names to be used in files
	int i; //used for 'for loop'
	ifstream myfile("students.txt");
	if (myfile.is_open())
	{
		while (!myfile.eof())
		{
			getline(myfile, line);
			data = "";
			if (line.length() > 0)
			{
				for (i = 0; i < line.length(); i++) //for use for making individual variable for name
				{
					data += line[i];
				}
				Haroon.sortedinsert(data);
			}
		}
		Haroon.displayList();
	}
	else //allows to check if there is no file along with finishing what contents are within the file
	{
		cout << "Unable to open file";
	}
	myfile.close();

	cout << "\nThe Student names have been sorted!\n" << endl;

	system("pause");
	return 0;
}
