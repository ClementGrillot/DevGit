// Copyright (C) 2017 Ange Abou - Polytech'Nice
//
// Ce programme est un logiciel libre; Il peut �tre redistribu� et/ou
// modifi� sous les termes de la "GNU General Public License" (Licence
// G�n�rale Publique GNU) comme publi�s par la Free Software Foundation;
// soit la version 2, soit (au choix) toute version ult�rieure.
//
// Ce programme a une vocation �ducative, et est distribu� sans aucune
// garantie de fonctionnement; sans la garantie implicite de pouvoir 
// le commercialiser ou m�me de r�pondre � un besoin particulier.
// Se r�f�rer � la "GNU General Public License" pour plus de d�tails.
//
// Date de cr�ation: Mai 2017
//
// Notes: 
//
// Point d'entr�e de slide-show

#include "SlideShow.hpp"
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main(int argc, char **argv) {
    /*
    * TODO: Compl�tez le code ici ...
    *
    * Le but est de :
    * - tenir compte du fichier pass� en argument de l'ex�cutable
    * - utiliser un objet SlideShow pour afficher al�atoirement sur la sortie standard,
    *   un nom de fichier (image) contenu dans le fichier pass� en argument
    */

    if( argc >= 1)
    {
        char * file_name = argv[1];

        SlideShow slideShow(file_name);
        slideShow.init();

        std::cout << "Affichage de 20 lignes aleatoires" << std::endl;

        for(int i = 0; i < 20; i++)
        {
            slideShow.displayRandomSlide(&std::cout);
        }
    }

    // Question 3c : 
    printf("Question 3c:\n");
    while(true)
    {
        char * file_name = argv[1];

        SlideShow slideShow(file_name);
        slideShow.init();
        slideShow.displayRandomSlide(&std::cout);
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }

    return 0;
}
