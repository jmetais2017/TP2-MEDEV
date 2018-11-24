
#include "imagePGM.h"

//Constructeurs
imagePGM::imagePGM(){}

imagePGM::imagePGM(imagePGM image){
    largeur = image.getLargeur();
    hauteur = image.getHauteur();
    for (int i=0; i<hauteur ; i++){
        for (int j=0; j<largeur ; j++){
            pixels[i][j] = image.getPixel(i, j);
        }
    }
}

//Accesseurs
int imagePGM::getLargeur() const{
    return largeur;
}

int imagePGM::getHauteur() const{
    return hauteur;
}

int imagePGM::getPixel(int const i, int const j) const{
    return pixels[i][j];
}


void imagePGM::setHauteur(int const hauteur){
    this->hauteur = hauteur;
}

void imagePGM::setLargeur(int const largeur){
    this->hauteur = largeur;
}

void imagePGM::setPixel(int const i, int const j, int const couleur){
    pixels[i][j] = couleur;
}