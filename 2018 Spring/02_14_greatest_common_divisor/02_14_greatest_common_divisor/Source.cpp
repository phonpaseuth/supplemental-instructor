#include <iostream>
using namespace std;

int GCD(int, int);

int main()
{
	cout << "Enter two integers numbers: " << endl;
	int a, b;
	cin >> a >> b;

	cout << "The GCD of " << a << " and " << b << " is " << GCD(a, b) << endl;
	return 0;
}

int GCD(int a, int b)
{
	if (b == 0)
		return a;
	else
		return GCD(b, a%b);
}