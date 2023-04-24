#include "Segment.h"

Segment::Segment(const Point& p1, const Point& p2) :Line(p1, p2), startPoint{ p1 }, endPoint{ p2 }
{

}

bool Segment::belongsPoint(const Point& p)
{
	double ex = abs(startPoint.x - endPoint.x);
	double ey = abs(startPoint.y - endPoint.y);
	if (ex >= abs(startPoint.x - p.x) && ex >= abs(endPoint.x - p.x) && (ex >= abs(startPoint.x - p.x) && ex >= abs(endPoint.x - p.x))) {
		return true;
	}
	return false;
}

Point Segment::intersectPoint(const Line& segment)
{
	auto point = Line::intersectPoint(segment);
	if (belongsPoint(point)) {
		return point;
	}
	else { return Point(NAN, NAN); };
}


