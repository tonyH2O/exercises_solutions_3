

//Трима спортни състезатели финишират за някакъв брой секунди(между 1 и 50).Да се напише програма,
//която чете времената на състезателите в секунди, въведени от потребителя и пресмята сумарното им време
//във формат& quot; минути:секунди& quot; .
//Секундите да се изведат с водеща нула
//(2 ; 02  , 7 07  35  35 ).

#include <iostream>
using namespace std;

int main()
{

	int a1, a2, a3;
	cin >> a1 >> a2 >> a3;

	int total = a1 + a2 + a3;
	int minutes = total / 60;
	int seconds = total % 60;

	if (seconds < 10)
	{
		cout << minutes << ":0" << seconds << endl;
	}
	else
	{
		cout << minutes << ":" << seconds << endl;
	}
	return 0;
}
