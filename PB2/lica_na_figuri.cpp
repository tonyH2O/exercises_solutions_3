


#include <iostream>
using namespace std;

int main()
{

	string shape;
	cin >> shape;

	double area;

	if (shape == "square")
	{
		double side;
		cin >> side;
		area = side * side;
	}
	else if (shape == "rectangle")
	{
		double side1, side2;
		cin >> side1 >> side2;
		area = side1 * side2;
	}
	else if (shape == "circle")
	{
		double radius;
		cin >> radius;
		area = 3.14159265359 * radius * radius;
	}
	else if (shape == "triangle")
	{
		double side1, side2;
		cin >> side1 >> side2;
		area = side1 * side2 / 2;
	}




	cout.setf(ios::fixed);
	cout.precision(3);
	cout << area << endl;
	return 0;
}


