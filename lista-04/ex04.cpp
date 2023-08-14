#include <iostream>

void lerValores(int[]);
void somaValores(int[], int[], int[]);
void imprimeValores(int[]);

int main(){

    int vetA[10], vetB[10], vetC[10];

    lerValores(vetA);
    lerValores(vetB);

    somaValores(vetA, vetB, vetC);

    imprimeValores(vetC);

    return 0;
}

void lerValores(int vet[]){
    for(int i=0; i<10; i++){
        std::cin >> vet[i];
    }
}

void somaValores(int vA[], int vB[], int vC[]){
    for(int i=0; i<10; i++){
        vC[i] = vA[i] + vB[i];
    }
}

void imprimeValores(int vC[]){
    for(int i=0; i<10; i++){
        std::cout << vC[i] << " ";
    }
}