#include <iostream>
#include "Point.h"
#include "Line.h"
#include "Segment.h"

int main(void) {
	auto s1 = Segment(Point(0, 0), Point(1, 1));
	auto s2 = Segment(Point(2, 1), Point(0, 2));
	Point(s1.intersectPoint(s2));
	return 0;
}