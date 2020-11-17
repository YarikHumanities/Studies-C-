#include <iostream>
using namespace std;
int main() 
{
	float x;
	cout << "Put a value of x: ";
	cin >> x;
	if (abs(x) < 1) {
		float e;
		cout << "Put a value of e: ";
			cin >> e;
		int n;
		n = 0;
		float yp;
		yp = pow((-1), n) * ((pow(x, 2 * n + 1)) / (2 * n + 1));
		float s;
		s = yp;
		float res;
		

		do {
			n = n + 1;
			float yn;
			yn = pow((-1), n) * ((pow(x, 2 * n + 1)) / (2 * n + 1));
			res = yn - yp;
			yp = yn;
			s += yp;
			

		} while (abs(res) < e);
		cout << s;
			

	}
	else {
		cout << "Value of x isn't suitable";
	}

}