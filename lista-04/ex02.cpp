#include <iostream>

void somaVetores(int[], int[], int[], int[]);

int main(){

    int vetA[3], vetB[3], vetC[3], vetD[3];

    for(int i=0; i<3; i++){
        std::cin >> vetB[i];
    }

    for(int i=0; i<3; i++){
        std::cin >> vetC[i];
    }

    for(int i=0; i<3; i++){
        std::cin >> vetD[i];
    }

    somaVetores(vetA, vetB, vetC, vetD);

    printf("A = [%d,%d,%d]\n", vetA[0], vetA[1], vetA[2]);

    return 0;
}

void somaVetores(int vA[], int vB[], int vC[], int vD[]){
    for(int i=0; i<3; i++){
        vA[i] = vB[i] + vC[i] - vD[i] * 5;
    }
}