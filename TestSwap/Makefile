#############
# Variables #
#############

CXXFLAGS = -std=c++11 -Wall -g -O0
SRC = Swap.cpp TestSwap.cpp
INC = Swap.hpp
OBJ = $(SRC:.cpp=.o)



################################################################
# Cible de l'éxécutable : édition des liens des fichiers objet #
################################################################

TestSwap: $(OBJ)
	g++ -o $@ $^


#####################################################################
# Cibles de dépendances : compilation des sources en fichiers objet #
#####################################################################

Swap.o: Swap.cpp $(INC)

TestSwap.o: TestSwap.cpp Catch.hpp

######################
# Cibles Habituelles #
######################

cleaner: clean
	rm -f test-point

clean:
	rm -f *.o
