
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
        int getPixel(int const i, int const j) const;
        
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

