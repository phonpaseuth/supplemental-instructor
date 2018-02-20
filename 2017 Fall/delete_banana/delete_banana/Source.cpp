/*
Write a program to remove the node of Fruit type which contains “Banana” from a given linked list and then print the updated linked list.
Part of the program is given below but it is incomplete. You need to complete it. You should create your own data file.
After you complete the program, please check it carefully to ensure it can handle the following cases:

1. Banana is the first node in the linked list
2. Banana is not the first node in the linked list.
3. Banana doesn’t exist in the linked list.
*/

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

struct Fruit {
	string strF;
	Fruit* next;
};

int main() {
	ifstream myfile;
	myfile.open("test.txt");
	Fruit * head = 0;

	Fruit f;
	myfile >> f.strF;
	f.next = head;
	head = &f;

	Fruit f1;
	myfile >> f1.strF;
	f1.next = head;
	head = &f1;

	Fruit f2;
	myfile >> f2.strF;
	f2.next = head;
	head = &f2;

	// Print the linked list:
	cout << "Print the linked list before the insertion:" << endl << endl;
	Fruit * t = head;
	while (t != 0) {
		cout << t->strF << " ";
		t = t->next;
	}
	
	// Write your code here to delete the node which has "banana"
	t = head;
	Fruit * preT = head;
	while (t != 0) {
		if (t->strF == "banana") {
			if (t == preT) 				// 1. "banana" is the first node in the linked list.
				head = t->next;
			else 
				preT->next = t->next;	// 2. "banana" is not the first node in the linked list.
			break;
		}
		else {
			preT = t;
			t = t->next;
		}
	}

	// Print the updated linked list
	cout << endl << endl << "Print the linked list after the insertion:" << endl << endl;
	t = head;
	while (t != 0) {
		cout << t->strF << " ";
		t = t->next;
	}
	cout << endl << endl;

	return 0;
}