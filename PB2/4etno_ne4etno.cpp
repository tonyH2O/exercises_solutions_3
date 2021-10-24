

//Да се напише програма, която чете цяло число въведено от потребителя и отпечатва на конзолата, дали е
//четно или нечетно.


#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;

	if (a % 2 == 0)
	{
		cout << "even" << endl;
	}
	else
	{
		cout << "odd" << endl;
	}
	return 0;
}
