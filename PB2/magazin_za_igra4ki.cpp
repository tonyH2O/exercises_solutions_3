


#include <iostream>
using namespace std;

int main()
{

	double a1;
	int a2;
	int a3;
	int a4;
	int a5;
	int a6;
	cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6;

	double b1 = a2 * 2.60 + a3 * 3 + a4 * 4.10 + a5 * 8.20 + a6 * 2;
	double b2 = a2 + a3 + a4 + a5 + a6;


	if (b2 >= 50)
	{
		b1 = b1 - (0.25 * b1);
	}
	else
	{
		b1 = b1;
	}

	double b3 = b1 - (0.10 * b1);


	if (b3 >= a1)
	{
		double b4 = b3 - a1;
		cout.setf(ios::fixed);
		cout.precision(2);
		cout << "Yes! " << b4 << " lv left" << endl;
	}
	else
	{
		double b4 = a1 - b3;
		cout.setf(ios::fixed);
		cout.precision(2);
		cout << "Not enough money! " << b4 << " lv needed." << endl;
	}
	return 0;
}





	