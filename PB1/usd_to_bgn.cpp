

//Напишете програма за конвертиране на щатски долари(USD) в български лева(BGN).Закръглете резултата
//до 2 цифри след десетичната запетая.Използвайте фиксиран курс между долар и лев : 1 USD = 1.79549 BGN.


#include <iostream>
using namespace std;

int main()
{
	double usd;
	cin >> usd;
	double bgn = usd * 1.79549;
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << bgn << endl;
	return 0;
}

