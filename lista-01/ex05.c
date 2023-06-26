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

/*
#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);

    if(num < 0 || num > 255){
        printf("Número %d não suportado!!\n", num);
        return -1;
    }

    printf("%d",(num / 128) % 2);
    printf("%d",(num / 64) % 2);
    printf("%d",(num / 32) % 2);
    printf("%d",(num / 16) % 2);
    printf("%d",(num / 8) % 2);
    printf("%d",(num / 4) % 2);
    printf("%d",(num / 2) % 2);
    printf("%d",(num / 1) % 2);

    return 0;
}
*/
