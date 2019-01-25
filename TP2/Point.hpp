#include <iostream>
#include <string>

using namespace std;

struct Point{
	int x;
	int y;
};

Point InitPoint(int X, int Y);

string Display(Point g);

Point operator+ (Point p1, Point p2);

Point operator++ (Point g);

Point operator++ (Point g, int);

Point operator-- (Point g);

Point operator-- (Point g, int);


