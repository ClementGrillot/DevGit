#define CATCH_CONFIG_MAIN

#include <iostream>
#include "Catch.hpp"
#include "Swap.hpp"

using namespace std;

TEST_CASE("Test de la fonction Swap", "[Swap]")
{
    int a = 1;
    int b = 2;

    Swap(a, b);

    REQUIRE(a==2);
    REQUIRE(b==1);
}
