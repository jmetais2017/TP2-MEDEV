/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eleve
 *
 * Created on 27 novembre 2018, 16:41
 */

#include <cstdlib>

#include "imagePGM.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    imagePGM image;
    image.lecture();
    
    cout << image.getPixel(148, 226) << endl;
    
    image.ecriture();

    return 0;
}

