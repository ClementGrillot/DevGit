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

#include "SlideShow.hpp"
#include <iostream>
// Pour g�n�rer des valeurs enti�res al�atoires uniform�ment r�parties
#include <random>
#include <chrono>

using namespace std;


#define CHECK_IF_INITIALISED() \
    if (!_isInitialised) { \
        cerr << "Attention: appeler d'abord init sur objet SlideShow." << endl;\
        return 0;\
    }

/* */
SlideShow::SlideShow(const char* iFilePath) 
    : _filepath(iFilePath)
    , _filestream(iFilePath)
    , _nbFilelines(0) 
    , _isInitialised(false) {
    
}

/* */
SlideShow::SlideShow(const std::string iFilePath) 
    : SlideShow(iFilePath.c_str()) {
    // Ce constructeur avec param�tre 'const string' r�utilise le constructeur
    // pr�c�dent avec param�tre 'const char*'
}
 
/* */
bool SlideShow::init() {
    if (_filestream) {
        /*
        * TODO: compl�tez le code ...
        *
        * Le but est de stocker le nombre de ligne du fichier dans l'attribut '_nbFilelines'
        * et d'initialiser par cons�quent l'objet courant.
        */
        std::string line;
        _nbFilelines = 0;
        while( getline(_filestream,line) )
            _nbFilelines++;

        _isInitialised = true;
    } else {
        cerr << "Erreur: impossible d'ouvrir le fichier." << endl;
        return false;
    }

    //Efface d'�ventuels flags lev� sur le flux comme le flag de fin de fichier.
    _filestream.clear();
    //Remet le curseur au d�but du fichier pour les utilisations futures du flux.
    _filestream.seekg(0,std::ios::beg);

    return true;
}

const std::uint64_t SlideShow::getNumberOfSlides() {
    CHECK_IF_INITIALISED();
    
    return _nbFilelines;
}

/*
 http://fr.cppreference.com/w/cpp/numeric/random/uniform_int_distribution
 Pour produire des valeurs entieres aleatoires uniformement reparties
 */
const std::uint64_t SlideShow::getRandomNumber() {
    CHECK_IF_INITIALISED();
    
    static random_device rd;
    static mt19937 gen(rd()); // generateur
    static uniform_int_distribution<> dis(1, getNumberOfSlides());
    /*
    * TODO: Expliquez dans les commentaires 
    *
    * - Pourquoi on utilise le mot cle 'static' ici ? (Contrairement au code en ligne)
    *   - Les variables en static ne sont creees qu'une seule fois et les instances sont partages dans tous les appels.
    *       Cela a le meme effet que creer les variables en globale et de ne pas reinitialiser le generateur.
    *
    * - Modifiez le code pour choisir les nombres aleatoires jusqu'au nombre de slides
    */

    /* Si besoin, pour generer un nombre aleatoire a partir de l'heure du systeme :
    gen.seed(std::chrono::system_clock::now()); //Prendre l'heure du systeme
    gen();
    */

    return dis(gen);
}

const std::uint8_t SlideShow::displayRandomSlide(std::ostream* out) {
    std::uint8_t rc = 0; // code de retour si OK
    if (!_isInitialised || out == 0)
    {
        cerr << "Attention: appeler d'abord init sur objet SlideShow." << endl;
        *out << "Impossible d'afficher le contenu de la ligne, appeler d'abord init sur objet SlideShow.";
        return rc = 1; // code d'erreur si non initialise
    }
    /* Le but est d'afficher sur la sortie standard, de facon aleatoire,
    * le contenu d'une ligne du fichier
    * correspondant au nombre aléatoire obtenu
    */
    std::string line;
    std::uint64_t target_line = getRandomNumber();

    // se remettre au debut du fichier
    std::uint64_t current_line = 0;
    while(getline(_filestream,line) && current_line != target_line ) //get_line dans le while ou en parametre : à check
    {
        current_line++;
    }

    //Efface d'eventuels flags leve sur le flux comme le flag de fin de fichier.
    _filestream.clear();
    //Remet le curseur au debut du fichier pour les utilisations futures du flux.
    _filestream.seekg(0,std::ios::beg);

    // ici la ligne est la bonne !!!
    *out << line << endl;

    return rc;
}
