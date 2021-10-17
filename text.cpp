
//Напишете програма, която прочита от конзолата име,
//фамилия, възраст и град и печата съобщение от
//следния вид : You are firstName lastName, age
//-years old person from  town.;

#include <iostream>
using namespace std;

int main()
{
	string first;
	string last;
	int age;
	string town;
	cin >> first >> last >> age >> town;
	cout << "You are " << first << " "<<last << ", " << age << "-years old person from " << town << "." << endl;
	return 0;
}

