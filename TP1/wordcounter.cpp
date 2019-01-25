#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

/* --------------------------------------------------------------------------- */
/* --------------------------------------------------------------------------- */

int main(int argC, char** argV)
{
    cout << "Initialisation du compteur" << endl;

    /*
     *  Ouverture du fichier passé en argument
     */
    try
    {
        std::ifstream infile(argV[1]);
        if( ! infile )
        {
            cout << "Erreur, fichier introuvable !" << std::endl;
        }


        std::string line;
        int Count = 0;
        while(std::getline(infile, line))
        {
            std::size_t prev = 0, pos;
//          On defini les délimiteurs
            while ((pos = line.find_first_of(" '.,;?!", prev)) != std::string::npos)
            {
                if (pos > prev)
                {
                    std::cout << line.substr(prev, pos-prev) << std::endl;
                    ++Count;
                }
                prev = pos+1;
            }
            if (prev < line.length())
            {
                std::cout << line.substr(prev, pos-prev) << std::endl;
                ++Count;
            }
        }
//      On retourne le nombre de mots trouvés
        std::cout   << "Il y a " << Count << " mots dans ce texte" << std::endl;
    }
    catch(...)
    {
        cout << "Oula doucement !" << std::endl;
    }

    return 0;
}

/* -------------------------------------------------------------------------- */
/* -------------------------------------------------------------------------- */