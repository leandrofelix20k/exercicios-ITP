#include <iostream>

void separaNumeros(int[]);
void separaMultiplos(int[], int[], int[], int[]);
void imprimeValores(int[], int[], int[], int, int, int);

int main(){

    int vetA[20];

    for(int i=0; i<20; i++){
        std::cin >> vetA[i];
    }

    separaNumeros(vetA);

    return 0;
}

void separaNumeros(int vA[]){
    int tamM3=0, tamM4=0, tamNM=0;

    for(int i=0; i<20; i++){
        if(vA[i] % 3 == 0){
            tamM3++;
        }

        if(vA[i] % 4 == 0){
            tamM4++;
        }

        if(vA[i] % 3 != 0 && vA[i] % 4 != 0){
            tamNM++;
        }
    }

    int multTres[tamM3], multQuatro[tamM4], naoMult[tamNM];

    separaMultiplos(vA, multTres, multQuatro, naoMult);
    imprimeValores(multTres, multQuatro, naoMult, tamM3, tamM4, tamNM);
}

void separaMultiplos(int vA[], int m3[], int m4[], int nM[]){
    int j=0, k=0, l=0;

    for(int i=0; i<20; i++){
        if(vA[i] % 3 == 0){
            m3[j] = vA[i];
            j++;
        }

        if(vA[i] % 4 == 0){
            m4[k] = vA[i];
            k++;
        }

        if(vA[i] % 3 != 0 && vA[i] % 4 != 0){
            nM[l] = vA[i];
            l++;
        }
    }
}

void imprimeValores(int m3[], int m4[], int nM[], int tamM3, int tamM4, int tamNM){
    std::cout << "a)";
    for(int i=0; i<tamM3; i++){
        std::cout << m3[i];
        if(i != tamM3-1){
            std::cout << ",";
        }
    }

    std::cout << "\nb)";
    for(int i=0; i<tamM4; i++){
        std::cout << m4[i];
        if(i != tamM4-1){
            std::cout << ",";
        }
    }

    std::cout << "\nc)";
    for(int i=0; i<tamNM; i++){
        std::cout << nM[i];
        if(i != tamNM-1){
            std::cout << ",";
        }
    }

    std::cout << "\n";
}