#include <string>
#include <sstream>

class WordCounter{
    public:
    //Constructor with string arg (Q2.A)
        WordCounter(const std::string line);
    //Function count() (Q2.A)
        unsigned int count();

    private:
    //Private attribut String (Q2.A)
        std::string line;
};