# include<iostream>

void matrice(float mat[3][3]) {
    std::cout << "Entrez les éléments de la matrice" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << "Élément [" << i << "][" << j << "] : ";
            std::cin >> mat[i][j];
        }
    }
}

void afficherMatrice(float mat[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void somme(float mat1[3][3], float mat2[3][3], float som[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            som[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void soustraction(float mat1[3][3], float mat2[3][3], float sous[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            sous[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

void produit(float mat1[3][3], float mat2[3][3], float prod[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            prod[i][j] = 0;
            for (int k = 0; k < 3; ++k) {
                prod[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

float Determinant(float mat[3][3]) {
    return mat[0][0] * (mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1])
         - mat[0][1] * (mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0])
         + mat[0][2] * (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]);
}

bool Inverse(float mat[3][3], float invers[3][3]) {
    float det = Determinant(mat);
    if (det == 0) {
        std::cout << "L'inverse ne peut pas être calculé car le déterminant est nul." << std::endl;
        return false;
    }

    invers[0][0] = (mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1]) / det;
    invers[0][1] = (mat[0][2] * mat[2][1] - mat[0][1] * mat[2][2]) / det;
    invers[0][2] = (mat[0][1] * mat[1][2] - mat[0][2] * mat[1][1]) / det;
    invers[1][0] = (mat[1][2] * mat[2][0] - mat[1][0] * mat[2][2]) / det;
    invers[1][1] = (mat[0][0] * mat[2][2] - mat[0][2] * mat[2][0]) / det;
    invers[1][2] = (mat[0][2] * mat[1][0] - mat[0][0] * mat[1][2]) / det;
    invers[2][0] = (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]) / det;
    invers[2][1] = (mat[0][1] * mat[2][0] - mat[0][0] * mat[2][1]) / det;
    invers[2][2] = (mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0]) / det;

    return true;
}

float Trace(float mat[3][3]) {
    float trace = 0;
    for (int i = 0; i < 3; ++i) {
        trace += mat[i][i];
    }
    return trace;
}

void Transposee(float mat[3][3], float trans[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            trans[j][i] = mat[i][j];
        }
    }
