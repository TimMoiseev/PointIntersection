#include "Line.h"

Line::Line(const Point& p1, const Point& p2)
{
	A = p1.y - p2.y;
	B = p2.x - p1.x;
	C = p2.y * p1.x - p2.x * p1.y;
	std::cout << "Line create : " << std::endl;
	std::cout <<A<<"x+("<<B<<")y+("<<C<<")=0"<< std::endl;
}

bool Line::belongsPoint(const Point& p)
{
	return false;
}
