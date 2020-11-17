#include <iostream>
using namespace std;
int main()
{
	float a;
	float c;
	cout << "Put value of the first cathetus: ";
	cin >> a;
	cout << "Put value of the hypotenuse: ";
	cin >> c;
	float b;
	b = sqrt(pow(c, 2) - pow(a, 2));
	if (a > 0 && c > 0) {
		cout << "Value of the secont cathetus: " << b;
	}
	if (a <= 0) {
		cout << "Value of the first cathetus is unacceptable" << endl;
	}
	if (c <= 0) {
		cout << "Value of the hypotenuse is unacceptable" << endl;
	}
}
