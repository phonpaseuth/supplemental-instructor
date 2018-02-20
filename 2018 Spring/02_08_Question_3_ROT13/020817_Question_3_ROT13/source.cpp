#include <iostream>
#include <string>
#include <fstream>
using namespace std;

char Rot13(char c);
void WriteTranlsatedChar(char c, ofstream& file);

int main() {
	cout << "What is the name of the input file?" << endl;
	string fileName;
	cin >> fileName;

	ifstream inFile;
	ofstream outFile;
	inFile.open(fileName);
	outFile.open("output.rot13");

	cout << "\nThe following characters have been replaced by:\n\n";
	char c;
	while (inFile.get(c)) {
		cout << c << " - " << Rot13(c) << endl;
		WriteTranlsatedChar(Rot13(c), outFile);
	}

	inFile.close();
	outFile.close();

	cout << endl;
	return 0;
}

void WriteTranlsatedChar(char c, ofstream& file) {
	file << c;
}

char Rot13(char c) {
	if (c < 'N')
		c += 13;
	else
		c -= 13;
	return c;
}

// This function use the "switch" methond
/*
char Rot13(char c) {
switch (c) {
case 'A': return 'N'; break;
case 'B': return 'O'; break;
case 'C': return 'P'; break;
case 'D': return 'Q'; break;
case 'E': return 'R'; break;
case 'F': return 'S'; break;
case 'G': return 'T'; break;
case 'H': return 'U'; break;
case 'I': return 'V'; break;
case 'J': return 'W'; break;
case 'K': return 'X'; break;
case 'L': return 'Y'; break;
case 'M': return 'Z'; break;
case 'N': return 'A'; break;
case 'O': return 'B'; break;
case 'P': return 'C'; break;
case 'Q': return 'D'; break;
case 'R': return 'E'; break;
case 'S': return 'F'; break;
case 'T': return 'G'; break;
case 'U': return 'H'; break;
case 'V': return 'I'; break;
case 'W': return 'J'; break;
case 'X': return 'K'; break;
case 'Y': return 'L'; break;
case 'Z': return 'M'; break;
default: return 'A';
}
}
*/