#include <iostream>
using namespace std;
int main()
{
	float x;
	float y;
	cout << "Put value of x: ";
	cin >> x;
	cout << "Put value of y: ";
	cin >> y;
	if (pow(x - 1, 2) + pow(y, 2) <= 0) {
		if (y <= -x + 3) {
			if (y > x - 3) {
				cout << "Point belongs yo the area";
			}
			else {
				cout << "Point doesn't belong yo the area";
			}
		}
		else { cout << "Point doesn't belong yo the area"; }

	}
	else {
		cout << "Point doesn't belong yo the area";
	}
}