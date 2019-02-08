/*#define CATCH_CONFIG_MAIN

#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>
#include "Catch.hpp"
#include "CSVParser.hpp"

using namespace std;

string rightPath="/home/user/DevGit/TP4/Fichier Test/Test.csv";
string wrongPath="chemin incorrect";
vector<string> testHeader;
int TestColumns = 4;
int TestRows = 3;
CSVParser csv;
stringstream ss("Col1,Col2,Col3,Col4");


TEST_CASE("Test initWithFile","[initWithFile]")
{   
    while( ss.good())
    {
        string substr;
        getline( ss, substr, ',' );
        testHeader.push_back( substr );
    }
    
    REQUIRE(csv.initWithFile(wrongPath) == false);
    REQUIRE(csv.initWithFile(rightPath) == true);    
    REQUIRE(csv.header == testHeader);
    REQUIRE(csv.numberOfColumns == TestColumns);
    REQUIRE(csv.numberOfRows == TestRows);
    REQUIRE(csv.filePath == rightPath);
}//*/