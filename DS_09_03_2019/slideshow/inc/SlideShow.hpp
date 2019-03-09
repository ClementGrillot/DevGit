// Copyright (C) 2017 Ange Abou - Polytech'Nice
//
// Ce programme est un logiciel libre; Il peut être redistribué et/ou
// modifié sous les termes de la "GNU General Public License" (Licence
// Générale Publique GNU) comme publiés par la Free Software Foundation;
// soit la version 2, soit (au choix) toute version ultérieure.
//
// Ce programme a une vocation éducative, et est distribué sans aucune
// garantie de fonctionnement; sans la garantie implicite de pouvoir 
// le commercialiser ou même de répondre à un besoin particulier.
// Se référer à la "GNU General Public License" pour plus de détails.
//
// Date de création: Mai 2017

#ifndef SLIDESHOW_HPP
#define SLIDESHOW_HPP

#include <fstream>
#include <iostream>
#include <string>
#include <cstdint> // for uint64_t, uint8_t, ...

class SlideShow {
    
    public:
    
        //@{
        // Constructeurs
        SlideShow(const char* iFilePath);
        SlideShow(const std::string iFilePath);
        //@}
        
        //@{
        // Fonctions membres
        /* Initialiser le nombre de lignes du fichier */
        bool init();
        /* Nombre aléatoire. Note: ne doit pas être utilisé avant init() */
        const std::uint64_t getRandomNumber();
        /* Fournit le nombre de slides */
        const std::uint64_t getNumberOfSlides();
        /* 
        Affiche aléatoirement le nom de l'image.
        Retourne un code d'erreur positif:
        - 0 si tout est OK
        - autre sinon
        Prend un paramètre de type pour le flux d'entrée-sortie
        */
        const std::uint8_t displayRandomSlide(std::ostream* out);
        //@}
    
    private:
    
        //@{
        // Constructeur par défaut
        SlideShow();
        SlideShow(const SlideShow & copy) {}
        /*
        * - À quoi ça sert d'avoir le constructeur par défaut en privé ?
        *   - C'est pour éviter de construire un objet Slideshow sans paramètre. Le constructeur par défaut est ainsi neutralisé.
        *   - On neutralise le constructeur par copie également pour éviter un appel du constructeur ifstream par cascade.
        */
        //@}
        
        //@{
        // Attributs
        std::string _filepath;
        std::ifstream _filestream;
        std::uint64_t _nbFilelines;
        bool _isInitialised;
        //@}
};
#endif
