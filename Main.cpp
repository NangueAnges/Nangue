m#include <iostream>
#include "matrice1.h"
#include "matrice1.cpp"


int main(int argc, char** argv) {
    float mat1[2][2], mat2[2][2];
    float som[2][2];
    float prod[2][2];
    float sous[2][2];
    float invers[2][2];
    float trans[2][2];
    float trace;
    float det;

    matrice(mat1);
    matrice(mat2);

    std::cout << "Matrice A :" << std::endl;
    afficherMatrice(mat1);
    std::cout << "Matrice B :" << std::endl;
    afficherMatrice(mat2);

    // Somme des matrices
    somme(mat1, mat2, som);
    std::cout << "Somme des matrices A + B :" << std::endl;
    afficherMatrice(som);

    // Soustraction des matrices
    soustraction(mat1, mat2, sous);
    std::cout << "Soustraction des matrices A - B :" << std::endl;
    afficherMatrice(sous);

    // Produit des matrices
    produit(mat1, mat2, prod);
    std::cout << "Produit des matrices A * B :" << std::endl;
    afficherMatrice(prod);

    // Déterminant de la matrice A
    det = Determinant(mat1);
    std::cout << "Déterminant de la matrice A : " << det << std::endl;

    // Trace de la matrice A
    trace = Trace(mat1);
    std::cout << "Trace de la matrice A : " << trace << std::endl;

    // Transposée de la matrice A
    Transposee(mat1, trans);
    std::cout << "Transposée de la matrice A :" << std::endl;
    afficherMatrice(trans);

    // Inverse de la matrice A
    if (Inverse(mat1, invers)) {
        std::cout << "Inverse de la matrice A :" << std::endl;
        afficherMatrice(invers);
    }

    return 0;
}


#include <iostream>
#include "matrice2.h"
#include "matrice2.cpp"

int main(int argc, char** argv) {
    float mat1[3][3], mat2[3][3];
    float som[3][3];
    float prod[3][3];
    float sous[3][3];
    float invers[3][3];
    float trans[3][3];
    float trace;
    float det;

    matrice(mat1);
    matrice(mat2);

    std::cout << "Matrice A :" << std::endl;
    afficherMatrice(mat1);
    std::cout << "Matrice B :" << std::endl;
    afficherMatrice(mat2);

    // Somme des matrices
    somme(mat1, mat2, som);
    std::cout << "Somme des matrices A + B :" << std::endl;
    afficherMatrice(som);

    // Soustraction des matrices
    soustraction(mat1, mat2, sous);
    std::cout << "Soustraction des matrices A - B :" << std::endl;
    afficherMatrice(sous);

    // Produit des matrices
    produit(mat1, mat2, prod);
    std::cout << "Produit des matrices A * B :" << std::endl;
    afficherMatrice(prod);

    // Déterminant de la matrice A
    det = Determinant(mat1);
    std::cout << "Déterminant de la matrice A : " << det << std::endl;

    // Trace de la matrice A
    trace = Trace(mat1);
    std::cout << "Trace de la matrice A : " << trace << std::endl;

    // Transposée de la matrice A
    Transposee(mat1, trans);
    std::cout << "Transposée de la matrice A :" << std::endl;
    afficherMatrice(trans);

    // Inverse de la matrice A
    if (Inverse(mat1, invers)) {
        std::cout << "Inverse de la matrice A :" << std::endl;
        afficherMatrice(invers);
    }

    return 0;
