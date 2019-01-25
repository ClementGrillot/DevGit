#define CATCH_CONFIG_MAIN

#include <iostream>
#include "Catch.hpp"
#include "Point.hpp"

using namespace std;

Point p1 = InitPoint(1,1);
Point p2 = InitPoint(2,2);
Point p3;
Point p4;

TEST_CASE("Point Initialisation Test", "[InitPoint]")
{

	REQUIRE( InitPoint(1, 1).x == 1);
	REQUIRE( InitPoint(1, 1).y == 1);
	REQUIRE( InitPoint(2, 2).x == 2);
	REQUIRE( InitPoint(2, 2).y == 2);
}

TEST_CASE("Point Display Test", "[Display]")
{

	REQUIRE( Display(p1) == "(1;1)");
	REQUIRE( Display(p2) == "(2;2)");
}

TEST_CASE("Test of operator+", "[operator+]")
{
	p3 = p1+p2;
	REQUIRE( p3.x == 3);
	REQUIRE( p3.y == 3);
}

TEST_CASE("Test of operator++", "[operator++]")
{
	p3 = p1++;
	REQUIRE( p3.x == 2);
	REQUIRE( p3.y == 1);

	p4 = ++p2;
	REQUIRE( p4.x == 2);
	REQUIRE( p4.y == 3);
}

TEST_CASE("Test of operator--", "[operator--]")
{
	p3 = p1--;
	REQUIRE( p3.x == 0);
	REQUIRE( p3.y == 1);

	p4 = --p2;
	REQUIRE( p4.x == 2);
	REQUIRE( p4.y == 1);
}