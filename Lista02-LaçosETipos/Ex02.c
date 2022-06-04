#include <stdio.h>

int main(void) 
{
    int linhas;
    int x, y, z = 0;

    scanf("%d", &linhas);
        if(linhas > 0){
        for(x = 1; x <= linhas; x++) {
            for(y = 1; y <= x; y++){
            z++;
            if(x < 5 && z <= 9)
                printf(" %d ", z);
            else
                printf("%d ", z);
            }       
        
            printf("\n");
        }
    }
        else if(linhas < 0)
            printf("Você entrou com %d, tente de novo na próxima\n", linhas);
    
        else
            printf("Você entrou com 0, tente de novo na próxima\n");
    
    return 0;
}