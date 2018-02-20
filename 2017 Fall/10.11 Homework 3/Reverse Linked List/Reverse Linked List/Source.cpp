#include <string>
#include <iostream>
#include <fstream>
using namespace std;
const int NUM = 10;

struct Student {
	string fName;
	string lName;
	Student *next;
};

int main() {
	Student stuArr[NUM];
	ifstream myfile;
	myfile.open("Test.txt");

 	for (int i = 0; i < NUM; i++) {
		myfile >> stuArr[i].fName;
		myfile >> stuArr[i].lName;
		stuArr[i].next = 0;
		cout << stuArr[i].fName << " " << stuArr[i].lName << endl;
	}

	Student *head = 0, *tail = head, *temp;
	for (int i = 9; i >= 0; i--) {
		temp = new Student;
		temp ->fName = stuArr[i].fName;
		temp->lName = stuArr[i].lName;
		temp->next = 0;
		if (head == 0 && tail == 0) {
			head = temp;
			tail = temp;
		}
		else {
			tail->next = temp;
			tail = temp;
		}
	}

	cout << endl;
	temp = head;
	while (temp != 0) {
		cout << temp->fName << " " << temp->lName << endl;
		temp = temp->next;
	}

	return 0;
} 