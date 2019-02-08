/** 
* DESCRIPTION: TD 4 POO du 25/01/2019 
* SUJET: Structure et Lecteur de fichier CSV
* DATE : 25/01/2019
* AUTEUR : C.GRILLOT
* Version : 1.0.0 
*/

#include <iostream>
#include <string>
#include "Fraction.hpp"

using namespace std;

struct Person 
{
    string phoneNumber;
    string firstName;
    string lastName;
    Fraction answers;

    bool hasValidNumber();
    bool hasValidNames();
    int getNumberOfPositiveResponses();
    int getNumberOfGivenResponses();
};