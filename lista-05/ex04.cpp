#include <iostream>

void lerMatriz(int mat[3][5]);
void somaMatriz(int mat[3][5], int vet[3]);
void imprimeResultado(int vet[3]);

int main(){

    int matriz[3][5], vetor[3];

    lerMatriz(matriz);
    somaMatriz(matriz, vetor);
    imprimeResultado(vetor);

    return 0;
}

void lerMatriz(int mat[3][5]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            std::cin >> mat[i][j];
        }
    }
}

void somaMatriz(int mat[3][5], int vet[3]){
    int cont = 0, soma = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            soma += mat[i][j];
        }
        vet[cont] = soma;
        soma = 0;
        cont++;
    }
}

void imprimeResultado(int vet[3]){
    std::cout << "SL = [" << vet[0];

    for(int i=1; i < 3; i++){
        std::cout << " " << vet[i];
    }

    std::cout << "]";
}