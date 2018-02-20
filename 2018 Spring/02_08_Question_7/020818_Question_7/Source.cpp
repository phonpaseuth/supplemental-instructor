#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	double pine = 0.89;
	double fir = 1.09;
	double cedar = 2.26;
	double maple = 4.50;
	double oak = 3.10;

	char type = 'P';
	int pieces;
	int width;
	int height;
	int length;
	double totalCost = 0;
	double cost;

	while (type != 'T') {
		cout << "Enter item: ";
		cin >> type;
		
		if (type == 'T')
			break;
		else {
			cin >> pieces >> width >> height >> length;
			string woodType;
			switch (type) {
			case 'P':
				cost = pine * pieces * (width * height * length) / 12;
				woodType = "Pine";
				break;
			case 'F':
				cost = fir * pieces * (width * height * length) / 12;
				woodType = "Fir";
				break;
			case 'C':
				cost = cedar * pieces * (width * height * length) / 12;
				woodType = "Cedar";
				break;
			case 'M':
				cost = maple * pieces * (width * height * length) / 12;
				woodType = "Maple";
				break;
			case 'O':
				cost = oak * pieces * (width * height * length) / 12;
				woodType = "Oak";
				break;
			default:
				cout << "You entered the wrong wood type, try agian." << endl;
			}
			totalCost = totalCost + cost;
			cout << pieces << " " << width << "x" << height << "x" << length << " " << woodType << ", cost: $" << setprecision(2) << fixed << cost << endl;
		}
	}

	cout << "Total cost: $" << setprecision(2) << fixed << totalCost << endl;

	return 0;
}