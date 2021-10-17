

#include <iostream>
using namespace std;

int main()
{
	double a1, a2, a3, a4, a5;
	cin >> a1 >> a2 >> a3 >> a4 >> a5;

	double b1 = a1 / 2;
	double b2 = b1 - (0.4 * b1);
	double b3 = b1 - (0.8 * b1);

	double c1 = a4 * b1;
	double c2 = a3 * b2;
	double c3 = a2 * b3;
	double c4 = a5 * a1;

	double total = c1 + c2 + c3 + c4;

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << total << endl;
	return 0;
}


