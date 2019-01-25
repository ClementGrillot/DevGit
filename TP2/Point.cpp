#include <iostream>
#include "Point.hpp"

using namespace std;

Point InitPoint(int X, int Y)
{
	Point res;
	res.x = X;
	res.y = Y;

	return res;
}

string Display(Point g)
{
	string res = "(" + to_string(g.x) + ";" + to_string(g.y) + ")";
	return res;
}	

Point operator+ (Point p1, Point p2)
{
	Point res;
	res.x=p1.x+p2.x;
	res.y=p1.y+p2.y;
	return res;
}

Point operator++(Point g,int)
{
	g.x= g.x+1;

	return g;
}

Point operator++(Point g)
{
	g.y= g.y+1;

	return g;
}

Point operator--(Point g,int)
{
	g.x = g.x-1;
	return g;
}

Point operator--(Point g)
{
	g.y = g.y-1;
	return g;
}
/*int main()
{
	Point myPoint1;
	Point myPoint2;
	Point myPoint3;
	int x=4;
	int y=3;
	int x2=7;
	int y2=12;
	string dis1;
	string dis2;
	string dis3;

	myPoint1 = InitPoint(x, y);
	myPoint2 = InitPoint(x2, y2);
	myPoint3 = myPoint1+myPoint2;
	dis1=Display(myPoint1);
	dis2=Display(myPoint2);
	dis3=Display(myPoint3);
	cout << dis1 << endl;
	cout << dis2 << endl;
	cout << dis3 << endl;

	myPoint1=myPoint1++;
	myPoint1=--myPoint1;
	myPoint2=myPoint2--;
	myPoint2=++myPoint2;

	dis1=Display(myPoint1);
	dis2=Display(myPoint2);
	cout << dis1 << endl;
	cout << dis2 << endl;

	return 0;

}*/