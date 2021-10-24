



#include <iostream>
using namespace std;

int main()
{

	double a1;
	string a2, a3;
	cin >> a1 >> a2 >> a3;

	if (a2 == "mm")
	{
		a1 /= 1000;
	}
	else if (a2 == "cm")
	{
		a1 /= 100;
	}

	if (a3 == "mm")
	{
		a1 *= 1000;
	}
	else if (a3 == "cm")
	{
		a1 *= 100;
	}

	cout.setf(ios::fixed);
	cout.precision(3);
	cout << a1 << endl;
	return 0;
}
