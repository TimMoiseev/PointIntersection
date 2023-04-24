#include "Line.h"

Line::Line(const Point& p1, const Point& p2)
{
	A = p1.y - p2.y;
	B = p2.x - p1.x;
	C = p2.y * p1.x - p2.x * p1.y;
	std::cout << std::endl;
	std::cout << "Line create : " << std::endl;
	std::cout <<A<<"x+("<<B<<")y+("<<C<<")=0"<< std::endl;
}

bool Line::belongsPoint(const Point& p)
{
	return A * p.x + B * p.y + C == 0 ? true : false;
}

Point Line::intersectPoint(const Line& line)
{
	double a = line.A / A;
	double y = (-a * C + line.C) / (a * B - line.B);
	double x = (-B * y - C) / A;
	std::cout << std::endl;
	std::cout<< "Line intersection point:"<< std::endl;
	if (y == INFINITY || x == INFINITY) { std::cout << "Line parallel!" << std::endl; }
	return Point(x, y);
}
