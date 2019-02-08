/*#define CATCH_CONFIG_MAIN

#include <iostream>
#include <string>
#include "Catch.hpp"
#include "Fraction.hpp"

TEST_CASE("Test function display","[display]")
{
    Fraction frac;

    //Test pour une fraction valide
    frac.numerateur = 3;
    frac.denominateur = 7;

    REQUIRE(frac.display() == "3/7");

    //Test pour un fraction a denominateur nul
    frac.denominateur = 0;
    REQUIRE(frac.display()=="Erreur, division par 0");
}

TEST_CASE("Test function operator+ with integer","[operator+]")
{
    Fraction frac;
    //Test pour une fraction valide
    frac.numerateur = 3;
    frac.denominateur = 2;
    int i = 5;
    frac.operator+(i);
    REQUIRE(frac.display()=="13/2");
    //Test pour un denominateur nul
    frac.denominateur=0;
    frac.operator+(i);
    REQUIRE(frac.display()=="Erreur, division par 0");
}

TEST_CASE("Test function operator+ with Fraction object", "[operator+]")
{
    Fraction frac;
    Fraction a;

    //Test avec deux fraction valide
    frac.numerateur = 3;
    frac.denominateur = 2;
    a.numerateur = 2;
    a.denominateur = 3;

    frac.operator+(a);
    REQUIRE(frac.display()=="13/6");

    //Test avec frac invalide
    frac.denominateur=0;
    frac.operator+(a);
    REQUIRE(frac.display()=="Erreur, division par 0");

    //Test avec a invalide
    frac.numerateur = 3;
    frac.denominateur = 2;
    a.denominateur = 0;
    frac.operator+(a);
    REQUIRE(frac.display()=="3/2");
}//*/