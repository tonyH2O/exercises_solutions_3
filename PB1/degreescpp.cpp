

//Напишете програма, която чете ъгъл в радиани(rad) и го преобразува в градуси(deg).Използвайте
//формулата : градус = радиан * 180 / π.Числото π е 3.14.Закръглете резултата до най - близкото цяло число
//използвайки round() функцията от библиотеката math.h.


#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	double rad;
	cin >> rad;

	double deg = rad * 180 / 3.14;

	cout << round(deg) << endl;
	return 0;
}
