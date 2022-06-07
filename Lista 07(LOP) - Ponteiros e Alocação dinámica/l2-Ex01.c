#include <stdio.h>

int maiorMenor(int *n, double *vet[*n]){
    *vet[0] = 5.4;

    return vet;
}

int main(){
    int n;

    scanf("%d", &n);

    double vet[n];

    for(int i=0; i<n; i++){
        scanf("%lf", &vet[i]);
    }

    maiorMenor(&n, &vet);

    printf("%lf", vet[0]);

    return 0;
}