#include <stdio.h>

void multiplosTres(int numerosA[]){
    int i, j, cont, x=0;
    
    printf("a)");
    for(i=0; i<20; i++){
        if(numerosA[i] % 3 == 0){      
        cont++;
        } 
    }
    for(j=0; j<20 ; j++){
        if(numerosA[j] % 3 == 0){   
        printf("%d",numerosA[j]);
        x++;
        if(x!=cont){
            printf(",");
        }
        else{
            break;
        }  
        }
    }
    printf("\n");
}

void multiplosQuatro(int numerosB[]){
    int i, j, cont=0, x=0;
    
    printf("b)");
    for(i=0; i<20; i++){
        if(numerosB[i] % 4 == 0){      
        cont++;
        } 
    }
    for(j=0; j<20 ; j++){
        if(numerosB[j] % 4 == 0){   
        printf("%d",numerosB[j]);
        x++;
        if(x!=cont){
            printf(",");
        }
        else{
            break;
        }  
        }
    }
    printf("\n");
}

void naoMultiplos(int numerosC[]){
    int i, j, cont=0, x=0;
    
    printf("c)");
    for(i=0; i<20; i++){
        if(numerosC[i] % 3 != 0 && numerosC[i] % 4 != 0){      
        cont++;
        } 
    }
    for(j=0; j<20 ; j++){
        if(numerosC[j] % 3 != 0 && numerosC[j] % 4 != 0){ 
        printf("%d",numerosC[j]);
        x++;
        if(x!=cont){
            printf(",");
        }
        else{
            break;
        }  
        }
    }
    printf("\n");
}

int main(void) {
    int vetor[20], i;
    
    for (i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }

    multiplosTres(vetor);
    multiplosQuatro(vetor);
    naoMultiplos(vetor);
    
    
    return 0;
}