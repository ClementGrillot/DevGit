/** 
* DESCRIPTION: TD 4 POO du 25/01/2019 
* SUJET: Structure et Lecteur de fichier CSV
* DATE : 25/01/2019
* AUTEUR : C.GRILLOT
* Version : 1.0.0 
*/

#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include "CSVParser.hpp"

using namespace std;

bool CSVParser::initWithFile(string chemin_fichier)
{
    string line;

    this->filePath = chemin_fichier;
    ifstream fichier;
    fichier.open(chemin_fichier);
    if (!fichier)
    {
        cerr << "Erreur, problème à l'ouverture du fichier" << endl;
        return false;
        
    }

    this->numberOfColumns = 0;
    this ->numberOfRows = 0;

    getline(fichier, line);
    for(size_t i=0 ; i < line.size(); i++)
    {
        if(line[i]==',' || line[i]==';')
        {
            this->numberOfColumns ++;
        }
    }   
    this->numberOfColumns++;
    fichier.clear();
    fichier.seekg (0, ios::beg);

    while(getline(fichier, line))
    {
        this->numberOfRows++;
    }
    fichier.clear();
    fichier.seekg (0, ios::beg);

    getline(fichier, line);
    stringstream ss(line);
    while( ss.good())
    {
        string substr;
        getline( ss, substr, ',' );
        this->header.push_back( substr );
    }
    fichier.close();

    

    return true;
    
}
