
// Напишете програма, която изчислява колко часове ще са необходими на един архитект, за да изготви
//проектите на няколко строителни обекта.Изготвянето на един проект отнема три часа.


/*Вход
От конзолата се четат 2 реда:
1. Името на архитекта - текст
2. Брой на проектите - цяло число в интервала[0… 100]
Изход
На конзолата се отпечатва :
The architect{ името на архитекта } will need{ необходими часове } hours to complete
{ брой на проектите } project / s.*/


#include <iostream>
using namespace std;

int main()
{
	string name;
	int projects;
	cin >> name >> projects;
	int fin = projects * 3;
	cout << "The architect " << name << " will need " << fin << " hours to complete " << projects << " " << "projects." << endl;
	return 0;
}
