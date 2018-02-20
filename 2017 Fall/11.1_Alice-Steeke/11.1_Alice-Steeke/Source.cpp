#include<iostream>
#include<string>
#include<fstream>
using namespace std;

const int NUM = 10;

struct Name
{
	string fName;
	string lName;
	Name* next;
};

int main()
{
	ifstream myfile;
	myfile.open("test.txt");
	Name * head = 0;
	Name myarr[10];

	// Task (1) read data from the file to assign data to the array, and link all nodes in the array to form a linked list
	for (int i = 0; i < NUM; i++)
	{
		myfile >> myarr[i].fName >> myarr[i].lName;
		if (head == 0)		// The first node to be added
			head = &myarr[i];
		if (i == NUM - 1)	// The last node
			myarr[i].next = 0;
		else
			myarr[i].next = &myarr[i + 1];
	}

	// Print out ot make sure the linked list worked
	cout << "Original linked list:" << endl;
	Name * temp = head;
	while (temp != 0)
	{
		cout << temp->fName << " " << temp->lName << endl;
		temp = temp->next;
	}


	//Task (2) given a new node, Bob, add it to the linked list by inserting it before the node "Alice Steele". Please note to consider different situation: whether "Alice Steele" exists, and whether it's the first node in the linked list.
	Name newnode;
	newnode.fName = "Bob";
	newnode.lName = "Liu";
	newnode.next = 0;

	Name * preTemp = head;
	temp = head;
	while (temp != 0)
	{
		if (temp->fName == "Alice" && temp->lName == "Steele")	// Alice Steele exist in the list
		{
			if (temp == preTemp)	// Alice Steele is the first in the list
			{
				head = &newnode;
				head->next = temp;
			}
			else
			{
				preTemp->next = &newnode;
				newnode.next = temp;
			}
			break;
		}
		else						// Traverse the linked list
		{
			preTemp = temp;
			temp = temp->next;
		}
	}

	//Task (3) print out the entire linked list. For each node in the linked list, print out its first name followed by the last name.
	cout << endl << "New linked list: " << endl << endl;
	temp = head;
	while (temp != 0)
	{
		cout << temp->fName << " " << temp->lName << endl;
		temp = temp->next;
	}

	return 0;
}