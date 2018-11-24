/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "imagePGM.h"

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