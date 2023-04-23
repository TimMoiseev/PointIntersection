#include "Point.h"

Point::Point(double x, double y): x{x}, y{y}
{
	std::cout << "Point create : " << std::endl;
	std::cout << "x: " << x << std::endl;
	std::cout << "y: " << y << std::endl;
}
