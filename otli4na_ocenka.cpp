
//Първата задача от тази тема е да се напише конзолна програма, която чете оценка(десетично число),
//въведена от потребителя и отпечатва Excellent! , ако оценката е 5.50 или по - висока.


#include <iostream>
using namespace std;

int main()
{

	double a;
	cin >> a;

	if (a >= 5.50)
	{
		cout << "Excellent!" << endl;
	}
	return 0;
}
