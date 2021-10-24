

//Да се напише програма, която чете две цели числа въведени от потребителя и отпечатва по - голямото от
//двете.


#include <iostream>
using namespace std;


int main()
{
	int a1, a2;
	cin >> a1 >> a2;

	if (a1 > a2)
	{
		cout << a1 << endl;
	}
	else
	{
		cout << a2 << endl;
	}
	return 0;
}
