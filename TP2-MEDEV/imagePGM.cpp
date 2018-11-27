
#include "imagePGM.h"


//Constructeurs
imagePGM::imagePGM(){

}

imagePGM::imagePGM(imagePGM const& image){
    largeur = image.getLargeur();
    hauteur = image.getHauteur();
    pixels = vector<vector<int>>();
    for (int i=0; i<hauteur ; i++){
        pixels.push_back(vector<int>());
        for (int j=0; j<largeur ; j++){
            pixels[i].push_back(image.getPixel(i, j));
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



//Lecture

void imagePGM::lecture(){
    string chaine;
    string nomFichier;
    fstream fichier;
    
    cout << "Nom du fichier à lire? " << endl;
    cin >> nomFichier ;
    
    fichier.open(nomFichier, ios::in);
    cout << "Fichier ouvert " << endl;
    
    fichier >> chaine ; //P2
    
    fichier >> chaine ; //Ligne de commentaires
    
    
    //Dimensions
    fichier >> chaine ;
    largeur = stoi(chaine);
    fichier >> chaine ;
    hauteur = stoi(chaine);
    
    fichier >> chaine ; //255
    
    //Pixels
    cout << "Lecture des pixels " << endl;
    pixels = vector<vector<int>>();
    pixels.push_back(vector<int>());
    int i = 0;
    int j = 0;
    while (!fichier.eof()){
        fichier >> chaine ;
        pixels[i].push_back(stoi(chaine));
        j++;
        if(j >= largeur){
            j = 0;
            i++;
            pixels.push_back(vector<int>());
        }
        
    }
    fichier.close();
  
}


//Ecriture

void imagePGM::ecriture(){
    fstream fichier;
    string nomFichier;
    
    cout << "Nom du fichier dans lequel écrire? " << endl;
    cin >> nomFichier ;
    
    fichier.open(nomFichier, ios::app|ios::out);
    
    fichier << "P2" << endl;
    fichier << "#" << endl;
    fichier << largeur << " " << hauteur << endl;
    fichier << 255 << endl;
    
    //Ecriture des pixels
    
    for (int i=0; i<hauteur; i++){
        for(int j=0; j<largeur; j++){
            fichier << pixels[i][j] << " "; 
        }
        fichier << endl;
    }
    
    fichier.close();
}