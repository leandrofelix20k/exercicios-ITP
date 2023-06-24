#include <stdio.h>

int main() {

  double nota1, nota2, nota3;
  double peso1, peso2, peso3;
  double media;

  scanf("%lf, %lf", &nota1, &peso1);
  scanf("%lf, %lf", &nota2, &peso2);
  scanf("%lf, %lf", &nota3, &peso3);

  media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 +peso3);
  
  if (media < 3)
    printf("O aluno foi REPROVADO com média %.2lf", media);
  else if (media >= 7)
    printf("O aluno foi APROVADO com a média %.2lf", media);
  else if ((media > 3 && (media < 7)))
    printf("O aluno ficou em RECUPERAÇÃO com média %.2lf precisando de %.2lf", media, 10 - media);
  
  
  return 0;
}