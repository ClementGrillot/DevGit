#############
# Variables #
#############

CXXFLAGS = -std=c++11 -Wall -g -O0
SRC = Point.cpp PointTest.cpp
INC = Point.hpp
OBJ = $(SRC:.cpp=.o)



################################################################
# Cible de l'éxécutable : édition des liens des fichiers objet #
################################################################

TestPoint: $(OBJ)
	g++ -o $@ $^


#####################################################################
# Cibles de dépendances : compilation des sources en fichiers objet #
#####################################################################

Point.o: Point.cpp $(INC)

PointTest.o: PointTest.cpp Catch.hpp

######################
# Cibles Habituelles #
######################

cleaner: clean
	rm -f test-point

clean:
	rm -f *.o
