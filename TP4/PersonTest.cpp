#define CATCH_CONFIG_MAIN

#include <iostream>
#include <string>
#include "Catch.hpp"
#include "Person.hpp"

using namespace std;

TEST_CASE("Test of function hasValidNumber", "[hasValidNumber]")
{
    //Test si le numero est valide
    Person Kaathalis;
    Kaathalis.phoneNumber = "0674089177";

    REQUIRE(Kaathalis.hasValidNumber()==true);

    //Test si le numero est invalide : nombre de digit incorrect
    Kaathalis.phoneNumber = "067408917";
    REQUIRE(Kaathalis.hasValidNumber()==false);

    //Test si le numero est invalide : ne commence pas par 0
    Kaathalis.phoneNumber = "9674089177";
    REQUIRE(Kaathalis.hasValidNumber()==false);

    //Test si le numero est invalide : Caractère incorrect
    Kaathalis.phoneNumber="0BONJOUR!!";
    REQUIRE(Kaathalis.hasValidNumber()==false);
    
}

TEST_CASE("Test of function hasValidNames","[hasValidNames]")
{
    Person Kaathalis;

    //Test d'un cas valide
    Kaathalis.firstName = "Clement";
    Kaathalis.lastName = "GRILLOT";

    REQUIRE(Kaathalis.hasValidNames()==true);

    //Test d'un cas invalide a cause du prénom
    Kaathalis.firstName="Cl3ment";
    REQUIRE(Kaathalis.hasValidNames()==false);

    //Test d'un cas invalide a cause du nom de famille
    Kaathalis.firstName="Clement";
    Kaathalis.lastName="Gr3llot";
    REQUIRE(Kaathalis.hasValidNames()==false);
}
TEST_CASE("Test function getNumberOfPositiveResponses/getNumberOfGivenResponses", "[getNumberOfPositiveResponses/getNumberOfGivenResponses]")
{
    Person Kaathalis;
    Kaathalis.answers.numerateur = 3;
    Kaathalis.answers.denominateur = 5;

    //Test de getNumberOfPositiveResponses
    REQUIRE(Kaathalis.getNumberOfPositiveResponses()==3);

    //Test de getNumberOfGivenResponses
    REQUIRE(Kaathalis.getNumberOfGivenResponses()==5);
}
    //*/