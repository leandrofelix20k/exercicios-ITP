#include <iostream>

void lerVetor(int[], int);
void intercalaVetores(int[], int[], int[], int, int, int);
void imprimeVetor(int[], int);

int main(){

    int tamVet1, tamVet2, tamVetFinal;

    std::cin >> tamVet1;
    int vet1[tamVet1];

    lerVetor(vet1, tamVet1);

    std::cin >> tamVet2;
    int vet2[tamVet2];

    lerVetor(vet2, tamVet2);

    tamVetFinal = tamVet1 + tamVet2;
    int vetSaida[tamVetFinal];

    intercalaVetores(vet1, vet2, vetSaida, tamVet1, tamVet2, tamVetFinal);

    imprimeVetor(vetSaida, tamVetFinal);

    return 0;
}

void lerVetor(int vet[], int tamVet){
    for(int i=0; i<tamVet; i++){
        std::cin >> vet[i];
    }
}

void intercalaVetores(int v1[], int v2[], int vF[], int tamV1, int tamV2, int tamVF){
    int i=0, j=0, k=0;

    while(k < tamVF){
        if(i < tamV1){
            vF[k] = v1[i];
            k++;
            i++;
        }
        if(j < tamV2){
            vF[k] = v2[j];
            k++;
            j++;
        }
    }
}

void imprimeVetor(int vF[], int tamVF){
    std::cout << "Resultado: ";
    for(int i=0; i<tamVF; i++){
        std::cout << vF[i] << " ";
    }
    std::cout << "\n";
}
