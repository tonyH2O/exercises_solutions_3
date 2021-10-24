

/*Да се напише програма, която чете скорост(реално число), въведена от потребителя и отпечатва
информация за скоростта.При скорост до 10 (включително)отпечатайте “slow”.При скорост над 10 и до 50
отпечатайте “average”.При скорост над 50 и до 150 отпечатайте “fast”.При скорост над 150 и до 1000
отпечатайте “ultra fast”.При по - висока скорост отпечатайте “extremely fast”.*/


#include <iostream>
using namespace std;

int main()
{

	double a1;
	cin >> a1;

	string a2;

	if (a1 <= 10)
	{
		a2 = "slow";
	}
	else if (a1 > 10 and a1 <= 50)
	{
		a2 = "average";
	}
	else if (a1 > 50 and a1 <= 150)
	{
		a2 = "fast";
	}
	else if (a1 > 150 and a1 <= 1000)
	{
		a2 = "ultra fast";
	}
	else
	{
		a2 = "extremely fast";
	}

	cout << a2 << endl;
	return 0;
}
