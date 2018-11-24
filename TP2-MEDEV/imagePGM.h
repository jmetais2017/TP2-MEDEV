/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   imagePGM.h
 * Author: Julien
 *
 * Created on 25 novembre 2018, 00:17
 */

#ifndef IMAGEPGM_H
#define IMAGEPGM_H

class imagePGM {
    
    private :
        int largeur;
        int hauteur;
        int pixels[hauteur][largeur];
    
    public :
        //Accesseurs
        int getLargeur() const;
        int getHauteur() const;
        int getPixel(int i, int j) const;
        
        void setLargeur(int const largeur);
        void setHauteur(int const hauteur);
        void setPixel(int const i, int const j, int const couleur);
        
        //Méthodes
        void lecture();
        void ecriture();
        void histogramme();
        
        void seuillage();
        imagePGM difference(imagePGM image);
        
        //Constructeurs
        imagePGM();
        imagePGM(imagePGM const& image);
        
           
};




#endif /* IMAGEPGM_H */

