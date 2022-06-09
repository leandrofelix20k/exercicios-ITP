#include <stdio.h>

void nMaior(double *v, double *maior,  int *n){
    *maior = v[0];

    for(int i = 0; i < *n; i++){
        if(v[i] > *maior){
            *maior = v[i];
        }
    }
}

void nMenor(double *v, double *menor,  int *n){
    *menor = v[0];

    for(int i = 0; i < *n; i++){
        if(v[i] < *menor){
            *menor = v[i];
        }
    }
}

int main(){
    int n;

    scanf("%d", &n);    
 
    double maior, menor, vet[n];

    for(int i = 0; i < n; i++){
        scanf("%lf", &vet[i]);
    }

    nMaior(vet, &maior, &n);
    nMenor(vet, &menor, &n);

    printf("%.2lf\n", maior);
    printf("%.2lf\n", menor);

    return 0;
}