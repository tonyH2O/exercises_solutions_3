


#include <iostream>
using namespace std;

int main()
{

	double a1;
	int a2;
	double a3;
	cin >> a1 >> a2 >> a3;

	double b1 = 0.1 * a1;
	double b2 = a2 * a3;

	if (a2 > 150)
	{
		b2 = b2 - b2 * 0.10;
	}

	double b3 = b1 + b2;

	if (b3 > a1)
	{
		cout << "Not enough money!" << endl;
		cout << "Wingard needs " << b3 - a1 << " leva more" << endl;
	}
	else {
		cout << "Action!" << endl;
		cout << "Wingard starts filming with " << a1 - b3 << " leva left" << endl;
	}
	return 0;
}
