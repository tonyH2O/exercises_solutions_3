

#include <iostream>
using namespace std;


int main()
{
	int rent;
	cin >> rent;

	double cake = rent * 0.20;
	double drinks = cake - (0.45*cake);
	double animator = 0.3333333333333333 * rent; // rent/3.0

	double total = rent + cake + drinks + animator;

	cout << total << endl;

	return 0;
}
