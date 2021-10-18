

//Напишете програма, която чете градуси по скалата на Целзий(°C) 
//и ги преобразува до градуси по скалата на Фаренхайт(°F).
//Закръглете резултата до 2 символа след десетичния знак.


#include <iostream>
using namespace std;

int main()
{
	double c;
	cin >> c;

	double res = abs((c * 1.8) + 32);

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << res << endl;
	return 0;
}
