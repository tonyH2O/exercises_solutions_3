﻿

/*Дадено е цяло число – начален брой точки.Върху него се начисляват бонус точки по правилата, описани по -
долу.Да се напише програма, която пресмята бонус точките, които получава числото и общия брой точки
(числото + бонуса).
 Ако числото е до 100 включително, бонус точките са 5.
 Ако числото е по - голямо от 100, бонус точките са 20 % от числото.
 Ако числото е по - голямо от 1000, бонус точките са 10 % от числото.
 Допълнителни бонус точки(начисляват се отделно от предходните) :
	o За четно число  + 1 т.
	o За число, което завършва на 5  + 2 т.*/



#include <iostream>
using namespace std;


int main()
{

	int a1;
	cin >> a1;

	double bonus = 0.0;

	if (a1 <= 100)
	{
		bonus = 5;
	}
	else if (a1 > 100 and a1 <= 1000)
	{
		bonus = 0.2 * a1;
	}
	else
	{
		bonus = 0.1 * a1;
	}

	if (a1 % 2 == 0)
	{
		bonus += 1;
	}
	else if (a1 % 10 == 5)
	{
		bonus += 2;
	}

	cout << bonus << endl;
	cout << a1 + bonus << endl;
	return 0;
}
