#include <iostream>
#include <cmath>
#include "Circle.h"

using std::cout;
using std::cin;
using std::endl;
using std::pow;
using std::round;

int main()
{
	// print name of program
	cout << "Circle Calculator" << endl << endl;

	// get radius from user
    
	double radius;
	cout << "Enter radius:  ";
	cin >> radius;

    Circle circle;
    circle.set_radius(radius);


	// write output to console
	cout << "Diameter:      " << circle.get_diameter() << endl
		<< "Circumference: " << circle.get_circumference() << endl
		<< "Area:          " << circle.get_area() << endl << endl
		<< "Bye!" << endl << endl;

	// return value that indicates normal program exit
    return 0;
}
