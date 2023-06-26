#include <stdio.h>
#include <math.h>

int main(){
    int primeiro, ultimo, num, soma, log, fator;

    scanf("%d", &num);

    log = log10(num);
    fator = pow(10, log);

    primeiro = (num / fator);
    ultimo = num % 10;
    soma = primeiro + ultimo;


    printf("O último numero é: %d\n", ultimo);
    printf("O primeiro número é: %d\n", primeiro);
    printf("A soma é: %d\n", soma);
    return 0;
}

/*
#include <stdio.h>

int main(){
  int number;
  scanf("%d", &number);
  int last = number % 10;
  printf("O último numero é: %d\n", last);
  while(number >= 10){
      number = number/10;
  }
  printf("O primeiro número é: %d\n", number);
  printf("A soma é: %d", number + last);

  return 0;
}
*/
