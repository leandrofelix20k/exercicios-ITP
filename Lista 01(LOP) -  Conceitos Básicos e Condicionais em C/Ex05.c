#include <stdio.h>

int main(){
    int num, vet[8], i=0, qntd=128;

    scanf("%d", &num);

    if(num < 0 || num > 255)
        printf("Número %d não suportado!!", num);
    else{
        while(qntd != 0){
            vet[i] = (num / qntd) % 2;
            qntd = qntd / 2;
            printf("%d", vet[i]);
            i++;
        }
    }
    
    return 0;
}