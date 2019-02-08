#include <iostream>
#include <string>

using namespace std;

struct Fraction
{
    int numerateur;
    int denominateur;

    string display();
    void operator+(int i);
    void operator+(const Fraction a);
};