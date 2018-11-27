
#ifndef IMAGEPGM_H
#define IMAGEPGM_H

#include <vector>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

class imagePGM {
    
    private :
        int largeur;
        int hauteur;
        vector<vector<int>> pixels;
    
    public :
        //Accesseurs
        int getLargeur() const;
        int getHauteur() const;
        int getPixel(int const i, int const j) const;
        
        void setLargeur(int const largeur);
        void setHauteur(int const hauteur);
        void setPixel(int const i, int const j, int const couleur);
        
        //Méthodes
        void lecture();
        void ecriture();
        //void histogramme();
        
        //void seuillage();
        //imagePGM difference(imagePGM image);
        
        //Constructeurs
        imagePGM();
        imagePGM(imagePGM const& image);
        
           
};




#endif /* IMAGEPGM_H */

