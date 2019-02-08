#include <iostream>
#include <string>
#include "Fraction.hpp"

using namespace std;

string Fraction::display()
{
    if(this->denominateur == 0)
    {
        return "Erreur, division par 0";
    }
    return to_string(this->numerateur) + "/" + to_string(this->denominateur);
}

void Fraction::operator+(int i)
{
    if(this->denominateur==0)
    {
        return;
    }
    this->numerateur = (i*this->denominateur) + this->numerateur;
}

void Fraction::operator+(const Fraction a)
{
    if(this->denominateur == 0 or a.denominateur==0)
    {
        return;
    }
    this->numerateur= (this->numerateur*a.denominateur)+(a.numerateur*this->denominateur);
    this->denominateur = this->denominateur*a.denominateur;

}