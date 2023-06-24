#include <stdio.h>

int main(){
    int linhas, cont=1;

    scanf("%d", &linhas);

    if(linhas > 0){
        for(int i=1; i < linhas+1; i++){
            for(int j=0; j < i; j++){
                if(cont < 10){
                    printf(" ");
                }
            printf("%d ", cont);
            cont++;
            }
        printf("\n");
        }
        /*
        for(int i=1; i < linhas+1; i++){
            for(int j=0; j < i; j++){
            printf("%2d ", cont);
            cont++;
            }
        printf("\n");
        */
    }
    else{
        printf("Você entrou com %d, tente de novo na próxima\n", linhas);
    }

    return 0;
}