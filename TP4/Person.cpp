#include <iostream>
#include <string>
#include "Person.hpp"


bool Person::hasValidNumber()
{
    // On test si le numero de téléphone compte bien 10 digit et commence par 0
    if(this->phoneNumber.length() == 10 && this->phoneNumber[0]=='0')
    {
        //On parcours le numéro de téléphone
        for (size_t i =0; i<10; i++)
        {
            //A chaque caractère, on verifie si le caractère est alphabetique
            if(isalpha(this->phoneNumber[i]))
            {
                //Si oui le numéro est invalide
                return false;    
            }

        }
        // Sinon la fonction renvoie un message positif
        return true;
    }
    //Si l'un des deux condition de départ est fausse, le numéro n'est pas valide
    return false;
}

bool Person::hasValidNames()
{
    for (size_t i=0; i<this->firstName.length();i++)
    {
        if(isalpha(this->firstName[i])==false)
        {
            return false;
        }
    }
    for(size_t j=0;j<this->lastName.length();j++)
    {
        if(isalpha(this->lastName[j])==false)
        {
            return false;
        }
    }

    return true;
}
int Person::getNumberOfPositiveResponses()
{
    return this->answers.numerateur;
}
int Person::getNumberOfGivenResponses()
{
    return this->answers.denominateur;
}