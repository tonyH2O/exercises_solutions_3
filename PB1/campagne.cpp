


#include <iostream>
using namespace std;


int main()
{
	int days, chefs, cakes1, cakes2, cakes3;
	cin >> days >> chefs >> cakes1 >> cakes2 >> cakes3;

	double sum1 = cakes1 * 45;
	double sum2 = cakes2 * 5.80;
	double sum3 = cakes3 * 3.20;

	double sum4 = (sum1 + sum2 + sum3) * chefs;
	double total = sum4 * days;
	double total2 = total - (total / 8.0);

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << total2 << endl;
	return 0;
}
