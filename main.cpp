#include <iostream>
#include "Point.h"
#include "Line.h"
#include "Segment.h"
#include <vector>
#include <chrono>
int main() {
	

	for (int i = 0; i < 10000; ++i) {
		std::vector<double> v{};
		for (int i = 0; i < 8; ++i) {
			v.push_back((rand()+rand())/2);
		}

		auto s1 = Segment(Point(v[0], v[1]), Point(v[2], v[3]));
		auto s2 = Segment(Point(v[4], v[5]), Point(v[6], v[7]));
		auto p1 = s1.intersectPoint(s2);
		bool answer = p1.isValid();
		if (answer) {
			p1.print();
		}
		else { std::cout << "point is invalid" << std::endl; }
	}
	
	return 0;
}