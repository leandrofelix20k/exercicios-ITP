#include <stdio.h>

int main() 
{
    int n, x, y, cont=0;

    scanf("%d", &n);

    double vet[n];
    double saida[n];

    for(int i = 0; i < n; i++){
        scanf("%lf", &vet[i]);
    }

    for(int j = n-1; j >= 0; j--){
        for(x = n-2; x >= 0; x--){
            if(vet[j] != vet[x]){
                saida[j] == vet[j];
                cont++;
            }
        }
    }
    printf("Contador\n: %d", cont);
    printf("[");
    for(int y = 0; y < n; y++){
        printf("%.4lf,", vet[y]);
    }
    printf("]");


    return 0;
}