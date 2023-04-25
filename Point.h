#pragma once
#define NULL 0
#define debugMode true;
#include <iostream>
#include <cstdlib>

class Point {
public:
	Point(double x, double y);
	void print();
	bool isValid();
	double x, y = NULL;
private:
	

};