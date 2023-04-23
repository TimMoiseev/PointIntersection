#pragma once
#define NULL 0
#include <iostream>
#include <cstdlib>
#include "Point.h"

class Line {
	//Ax+By+C=0
public:
	Line(const Point& p1, const Point& p2);
	bool belongsPoint(const Point& p);
private:
	double A, B, C = NULL;
};