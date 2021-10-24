﻿

/*Градинар продава реколтата от градината си на зеленчуковата борса.
Продава зеленчуци за N лева на килограм и плодове за M лева за килограм.
Напишете програма, която да пресмята приходите от реколтата в евро
(ако приемем, че едно евро е равно на 1.94 лв.).

Входни данни
От конзолата се четат 4 числа, по едно на ред :

Първи ред – Цена за килограм зеленчуци – число с плаваща запетая.
Втори ред – Цена за килограм плодове – число с плаваща запетая.
Трети ред – Общо килограми на зеленчуците – цяло число.
Четвърти ред – Общо килограми на плодовете – цяло число.
Ограничения : Всички числа ще са в интервала от 0.00 до 1000.00

Изходни данни
Да се отпечата на конзолата едно число с плаваща запетая : приходите от всички плодове и зеленчуци в евро.*/


#include <iostream>
using namespace std;

int main()
{
	double a1;
	double a2;
	int a3;
	int a4;
	cin >> a1 >> a2 >> a3 >> a4;

	double b1 = a1 * a3;
	double b2 = a2 * a4;
	double b3 = b1 + b2;
	double b4 = b3 / 1.94;

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << b4 << endl;
	return 0;
}