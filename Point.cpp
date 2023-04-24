#include "Point.h"

Point::Point(double x, double y): x{x}, y{y}
{
	std::cout << std::endl;
	std::cout << "Point create : " << std::endl;
	std::cout << "x: " << x << " y: " << y << std::endl;
}
