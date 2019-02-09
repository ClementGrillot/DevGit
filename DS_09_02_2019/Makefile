#############
# Variables #
#############

CXXFLAGS = -std=c++11 -Wall -g -O0
SRC = SRC/WordCounter.cpp Test/WordCounterTest.cpp
INC = Header/WordCounter.hpp
OBJ = $(SRC:.cpp=.o)



################################################################
# Cible de l'éxécutable : édition des liens des fichiers objet #
################################################################

test-smart-wc: $(OBJ)
	g++ -o $@ $^

#####################################################################
# Cibles de dépendances : compilation des sources en fichiers objet #
#####################################################################

WordCounter.o: SRC/WordCounter.cpp $(INC)

WordCounterTest.o: Test/WordCounterTest.cpp Header/Catch.hpp

######################
# Cibles Habituelles #
######################


cleaner: clean
	rm -f test-smart-wc

clean:
	rm -f *.o

test: test-smart-wc

