#include "Point.h"
#include "Rectangle.h"

#include <iostream>
#include <limits>

std::pair<int, int> getXY()
{
	std::pair<int, int> XY;
	std::cout << "Enter x: ";
	while (!(std::cin >> XY.first))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Wrong input! Please enter an integer: ";
	}
	std::cout << "Enter y: ";
	while (!(std::cin >> XY.second))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Wrong input! Please enter an integer: ";
	}
	return XY;
}

int main()
{
	std::cout << "Please enter x and y value for point p1." << std::endl;
	std::pair<int, int> XY = getXY();
	Point p1(XY.first, XY.second);
	std::cout << "p1 is (" << p1.getX() << ", " << p1.getY() << ")." << std::endl;

	const int shiftXBy = 3;
	const int shiftYBy = 5;

	p1.move(shiftXBy, shiftYBy);
	std::cout << "Move p1 by " << shiftXBy << " and " << shiftYBy << "." << std::endl;
	std::cout << "p1 is (" << p1.getX() << ", " << p1.getY() << ")." << std::endl;

	std::cout << "We'll use p1 point for the bottom left point of rectangle r1." << std::endl;
	std::cout << "Please enter x and y value for the top right point." << std::endl;
	XY = getXY();
	Point p2(XY.first, XY.second);
	Rectangle r1(p1, p2);

	std::cout << "Rectangle r1 area is: " << r1.area() << std::endl;
}
