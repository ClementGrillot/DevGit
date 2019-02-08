#############
# Variables #
#############

CXXFLAGS = -std=c++11 -Wall -g -O0
SRC = CSVParser.cpp Person.cpp Fraction.cpp CSVParserTest.cpp
SRC2= Person.cpp PersonTest.cpp
SRC3= Fraction.cpp FractionTest.cpp
INC = CSVParser.hpp Person.hpp Fraction.hpp
OBJ = $(SRC:.cpp=.o)
OBJ2 = $(SRC2:.cpp=.o)
OBJ3 = $(SRC3:.cpp=.o)



##############################################################################
# Cible de l'éxécutable TestCSVParser : édition des liens des fichiers objet #
##############################################################################

# TestCSVParser: $(OBJ)
# 	g++ -o $@ $^
##############################################################################
# Cible de l'éxécutable TestPerson : édition des liens des fichiers objet #
##############################################################################

TestPerson: $(OBJ2)
	g++ -o $@ $^
##############################################################################
# Cible de l'éxécutable TestPerson : édition des liens des fichiers objet #
##############################################################################

# TestFraction: $(OBJ3)
# 	g++ -o $@ $^
#####################################################################
# Cibles de dépendances : compilation des sources en fichiers objet #
#####################################################################

CSVParser.o: CSVParser.cpp $(INC)
CSVParserTest.o: CSVParserTest.cpp Catch.hpp

Person.o: Person.cpp $(INC)
PersonTest.o: PersonTest.cpp Catch.hpp

Fraction.o: Fraction.cpp $(INC)
FractionTest.o: FractionTest.cpp Catch.hpp

######################
# Cibles Habituelles #
######################

cleaner: clean
	rm -f TestCSVParser TestPerson TestFraction

clean:
	rm -f *.o
