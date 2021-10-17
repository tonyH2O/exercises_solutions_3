

#include <iostream>
using namespace std;

int main()
{
	double lv;
	cin >> lv;
	double eur = lv / 1.95;
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << eur << endl;
	return 0;
}
