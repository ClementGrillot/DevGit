/** 
* DESCRIPTION: TD 4 POO du 25/01/2019 
* SUJET: Structure et Lecteur de fichier CSV
* DATE : 25/01/2019
* AUTEUR : C.GRILLOT
* Version : 1.0.0 
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct CSVParser 
{
    int numberOfColumns;
    int numberOfRows;
    vector<string> header;

    string filePath;

    bool initWithFile(string filePath);

 /*   public:
        CSVParser(); //Constructeur par defaut*/
};