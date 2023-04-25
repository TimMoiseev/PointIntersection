#include "Point.h"

Point::Point(double x, double y) : x{ x }, y{ y } {};

void Point::print() {
	std::cout << std::endl;
	std::cout << "Point coordinates: "<<" x:" << x << " y:" << y << std::endl;
}

bool Point::isValid() { return this->x != NAN && this->y != NAN; };