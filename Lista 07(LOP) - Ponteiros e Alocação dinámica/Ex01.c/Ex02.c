#include <stdio.h>

int main() 
{
    int n, x, y, j, cont=0;

    scanf("%d", &n);

    double vet[n];
    double saida[n];

    for(int i = 0; i < n; i++){
        scanf("%lf", &vet[i]);
    }
/*
    for(int j = n; j >= 0; j--){
        for(x = n-1; x >= 0; x--){
            if(vet[j] != vet[x]){
                saida[j] == vet[j];
                cont++;
            }
        }
    }
*/
    for(j = 0; j < n; j++){
        for(x = 0; j < x; x++){
            if(j == x){
                    x++;
                }
            if(vet[j] != vet[x]){
                if(j == x){
                    x++;
                }
                saida[j] = vet[j];
                cont++;
                printf("entrou\n");
            }
        } 
    } 
    printf("Contador\n: %d", cont);
    printf("[");

    for(int y = 0; y < n; y++){
        printf("%.4lf,", saida[y]);
    }
    printf("]");


    return 0;
}