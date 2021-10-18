

//Напишете програма, която чете от конзолата число r и 
//пресмята и отпечатва лицето и периметъра на кръг / окръжност с радиус r.
//Area = pi * r * r.
//Perimeter = 2 * pi * r

#include <iostream>
using namespace std;

int main()
{
	double r;
	cin >> r;
	double area = 3.14 * r * r;
	double perimeter = 2 * 3.14 * r;
	cout << "Area = " << area << endl;
	cout << "Perimeter = " << perimeter << endl;
	return 0;
}
