#define CATCH_CONFIG_MAIN

#include "../Header/Catch.hpp"
#include "../Header/WordCounter.hpp"
#include <iostream>
#include <fstream>
#include <string>

TEST_CASE("Test of constructor and function count","[WordCounter.cpp]")
{
    //Create a WordCounter Object with a string of 3
    WordCounter Test("Something to try");
    REQUIRE(Test.count()== 3);

    //Test with a succession of digit
    WordCounter Test2("29385028502840");
    REQUIRE(Test2.count()==0);

    //Test with a succession of non alphabetic char
    WordCounter Test3("!:;,§/.?");
    REQUIRE(Test3.count()==0);
}