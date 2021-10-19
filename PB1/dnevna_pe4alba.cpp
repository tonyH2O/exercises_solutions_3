﻿

/*Иван е програмист в американска компания и работи от вкъщи
средно N дни в месеца, като изкарва средно по M долара на ден.
В края на годината Иван получава бонус, който е равен на 
2.5 месечни заплати.От спечеленото през годината му се 
удържат 25 % данъци.Напишете програма, която да пресмята 
колко е чистата средна печалба на Иван на ден в лева,
тъй като той харчи изкараното в България.Приема се, че
в годината има точно 365 дни.Курсът на долара спрямо лева ще се подава на функцията.

Входни данни
От конзолата се четат 3 числа:

На първия ред – работни дни в месеца.Цяло число в интервала[5 … 30].
На втория ред – изкарани пари на ден.Реално число в интервала[10.00 … 2000.00].
На третия ред – курсът на долара спрямо лева / 1 долар = X лева / .Реално число в интервала[0.99 … 1.99].
Изходни данни
На конзолата да се отпечата едно число – средната печалба
на ден в лева.Резултатът да се форматира до втората цифра след десетичния знак.*/



#include <iostream>
using namespace std;

int main()
{
	int a1;
	double a2;
	double a3;
	cin >> a1 >> a2 >> a3;

	double b1 = a1 * a2;
	double b2 = b1 * 12 + b1 * 2.5;
	double b3 = b2 * 0.25;
	double b4 = b2 - b3;
	double b5 = b4 * 1.59;
	double b6 = b5 / 365;

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << b6 << endl;
	return 0;
}
