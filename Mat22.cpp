#include<iostream>

void matrice(float mat[2][2]) {
    std::cout << "Entrez les éléments de la matrice" << std::endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << "Élément [" << i << "][" << j << "] : ";
            std::cin >> mat[i][j];
        }
    }
}

void afficherMatrice(float mat[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void somme(float mat1[2][2], float mat2[2][2], float som[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            som[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void soustraction(float mat1[2][2], float mat2[2][2], float sous[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            sous[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

void produit(float mat1[2][2], float mat2[2][2], float prod[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            prod[i][j] = mat1[i][j] * mat2[i][j];
        }
    }
}

float Determinant(float mat[2][2]) {
    return mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
}

bool Inverse(float mat[2][2], float invers[2][2]) {
    float det = Determinant(mat);
    if (det == 0) {
        std::cout << "L'inverse ne peut pas être calculé car le déterminant est nul." << std::endl;
        return false;
    }
    invers[0][0] = mat[1][1] / det;
    invers[0][1] = -mat[0][1] / det;
    invers[1][0] = -mat[1][0] / det;
    invers[1][1] = mat[0][0] / det;
    return true;
}

float Trace(float mat[2][2]) {
    return mat[0][0] + mat[1][1];
}

void Transposee(float mat[2][2], float trans[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            trans[j][i] = mat[i][j];
        }
    }
}
