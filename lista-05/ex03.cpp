#include <iostream>

void lerMatriz(int[3][3]);
void giraMatriz(int[3][3], int[3][3]);
void imprimeMatriz(int[3][3]);

int main(){

    int mat[3][3], matFinal[3][3];

    lerMatriz(mat);
    giraMatriz(mat, matFinal);
    imprimeMatriz(matFinal);

    return 0;
}

void lerMatriz(int mat[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            std::cin >> mat[i][j];
        }
    }
}

void giraMatriz(int mat[3][3], int matFinal[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0, k=2; j<3; j++, k--){
            matFinal[i][j] = mat[k][i];
        }
    }
}

void imprimeMatriz(int matFinal[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            std::cout << matFinal[i][j] << " ";
        }
        std::cout << '\n';
    }
}