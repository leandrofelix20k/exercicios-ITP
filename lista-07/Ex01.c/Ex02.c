#include <stdio.h>

int main() 
{
    int n, x, y, j, z=1, cont=0;

    scanf("%d", &n);

    double vet[n];
    double saida[n];

    for(int i = 0; i < n; i++){
        scanf("%lf", &vet[i]);
    }

    for(int j = n; j >= 0; j--){
        for(x = n-1; x >= 0; x--){
            if(vet[j] != vet[x]){
                saida[j] = vet[j];
                cont++;
            }
        }
    }

    cont = cont/n;
    printf("%d", cont);

 
    printf("[");

    for(int y = 0; y < n; y++){
        printf("%.4lf", saida[y]);
        if(z<cont){
            printf(",");
            z++;
        }
    }
    printf("]");


    return 0;
}