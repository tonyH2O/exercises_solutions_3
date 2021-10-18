


//Напишете програма, която чете от конзолата три числа
//b1, b2 и h и пресмята лицето на трапец с основи b1 и b2 и височина h.
//Формулата за лице на трапец е(b1 + b2)* h / 2.

#include <iostream>
using namespace std;

int main()
{
	double b1, b2, h;
	cin >> b1 >> b2 >> h;
	double total = (b1 + b2) * h / 2;
	cout << total << endl;
	return 0;
}
