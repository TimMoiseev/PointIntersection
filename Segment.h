#pragma once
#include "Line.h"

class Segment : public Line {
public:
	Segment(const Point& p1, const Point& p2);
	bool belongsPoint(const Point& p) override;
	Point intersectPoint(const Line& segment) override;

private:
	const Point& startPoint;
	const Point& endPoint;
};