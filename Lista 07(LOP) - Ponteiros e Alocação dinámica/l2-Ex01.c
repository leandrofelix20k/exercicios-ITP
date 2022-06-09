#include <stdio.h>

void nMaior(double *v, double *maior,  int *n){
    *maior = v[0];

    for(int i = 0; i < *n; i++){
        if(v[i] > *maior){
            *maior = v[i];
        }
    }
}

int main(){
    int n;

    scanf("%d", &n);    
 
    double maior, vet[n];

    for(int i = 0; i < n; i++){
        scanf("%lf", &vet[i]);
    }
    maior = vet[0];

    nMaior(vet, &maior, &n);

    printf("%.2lf", maior);

    return 0;
}