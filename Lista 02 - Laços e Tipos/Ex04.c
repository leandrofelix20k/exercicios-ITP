#include <stdio.h>
#include <math.h>

int main(void) 
{
    int primeiro, ultimo, num1, soma, log, fator, ok;

    scanf("%d", &num1);

    log = log10(num1);
    fator = pow(10, log);
    
    primeiro = (num1 / fator);
    ultimo = num1 % 10;
    soma = primeiro + ultimo;

    
    printf("O último numero é: %d\n", ultimo);
    printf("O primeiro número é: %d\n", primeiro);
    printf("A soma é: %d", soma);
    return 0;
}