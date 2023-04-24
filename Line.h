#pragma once
#define NULL 0
#include <iostream>
#include <cstdlib>
#include "Point.h"

class Line {
	//Ax+By+C=0
public:
	Line(const Point& p1, const Point& p2);
	virtual bool belongsPoint(const Point& p);
	virtual Point intersectPoint(const Line& line);
protected:
	double A, B, C = NULL;
};


