#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "../Header/WordCounter.hpp"

using namespace std;

//Affiche l'aide
void HelpOption(){
    cout << "usage: smart-wc [options] [filename]" << endl
    <<"Available Options :"<<endl
    <<"filename" <<  setw(50)  << "file to take into account (if required)" << endl
    <<"Option, dominant :" << endl
    <<"--help, -h" << setw(26)  << "display the usage" << endl
    <<"Options, exclusive :"<< std::endl
    <<"--cout, -c" << setw(36) << right <<"display the number of words" << endl
    << setw(45) << "Default behaviour, even if" <<endl
    << setw(30)<<"not present" << endl
    <<"--add, -a word" << std::setw(33) << right << "add a word in the dictionary" << endl;
}

//Compte le nombre de lignes.
unsigned int countLine(const char *Path){
    int count = 0;
    ifstream file;
    string s;
    file.open(Path);
    if(!file){
        cerr << "Erreur à l'ouverture du fichier " << Path << endl;
        return 0;
    }
    //Ajoute 1 tant qu'il trouve une ligne
    while(getline(file,s)){
        count++;
    }
    file.close();
    return count;
}

int main(int argc, char* argv[])
{
    if(argc=1 || argv[0]== "-h" || argv[0]== "--help" || argv[1]== "-h" || argv[1]== "--help")
    {
        HelpOption();
    }

}