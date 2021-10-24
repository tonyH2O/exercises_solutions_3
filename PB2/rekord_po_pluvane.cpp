

#include <iostream>
using namespace std;


int main()
{

	double a1, a2, a3;
	cin >> a1 >> a2 >> a3;

	double b1 = a2 * a3;
	double b2 = a2 / 15;
	double b3 = b2 * 12.5;
	double b4 = b1 + b3;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (b4 < a1)
	{
		cout << "Yes, he succeeded! The new world record is " << b4 << " seconds" << endl;
	}
	else if (b4 > a1)
	{
		cout << "No, he failed! He was " << b4 - a1 << " seconds slower" << endl;
	}
	return 0;
}
