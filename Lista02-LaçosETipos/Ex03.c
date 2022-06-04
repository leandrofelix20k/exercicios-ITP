#include <stdio.h>

int main(void) 
{
    int numero, c;
    int numInvertido, resto;
    
    scanf("%d", &numero);
    numInvertido = 0;
    c = numero;
    resto = numero % 2;

    while (c > 0) {
        numInvertido = (numInvertido * 10) + (c % 10);
        c = c / 10;
        
    }

    if(numero == numInvertido){
        if(resto == 0)
        printf("%d é Palíndromo e par.\n", numero);
        else 
        printf("%d é Palíndromo e impar.\n", numero);    
    }
    else{
        if(resto == 0)
        printf("%d não é Palíndromo e par.\n", numero);
        else 
        printf("%d não é Palíndromo e impar.\n", numero);
        
    }
    return 0;
}