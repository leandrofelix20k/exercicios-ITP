#include <stdio.h>

void somaVetores(int primeiroVetor[], int segundoVetor[], int tamanho){
    int soma;

    for(int i = 0; i < tamanho; i++){
        soma = primeiroVetor[i] + segundoVetor[i];
        printf("%d ", soma); 
    }   
}


int main(void) {
    int numero1, numero2;
    int vetA[10];
    int vetB[10];

    scanf("%d", &numero1);
    numero2 = numero1;

    if(numero1 > 10 && numero2 > 10){
        printf("Muitos elementos");
    }
    else{
        for(int i = 0; i < numero1; i++){
        scanf("%d", &vetA[i]);
        }
        for(int j = 0; j < numero2; j++){
        scanf("%d", &vetB[j]);
        }
        somaVetores(vetA, vetB, numero1);
    }
    
    return 0;
}