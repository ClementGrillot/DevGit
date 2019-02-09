#include <iostream>
#include <fstream>
#include <string>
#include "../Header/WordCounter.hpp"

using namespace std;
WordCounter::WordCounter(const string line)
{
    this->line = line;
}

unsigned int WordCounter::count()
{
    string currentWord="";
    int count=0;
    for(size_t i =0; i<=this->line.length();i++)
    {
        //if the current value of line[i] is an alphabetic char, we add it to the currentWord
        if(isalpha(this->line[i]))
        {
            currentWord+=this->line[i];
        }
        //if we encounter a non alphabetic char, empty currentWord and add 1 to count
        if(isalpha(this->line[i])==false && currentWord.length()!=0)
        {
            currentWord="";
            count++;
        }

    }

    return count;
}