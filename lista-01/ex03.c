#include <stdio.h>

int main(){
    double nota1, nota2, nota3, media;
    int peso1, peso2, peso3;

    scanf("%lf %d", &nota1, &peso1);
    scanf("%lf %d", &nota2, &peso2);
    scanf("%lf %d", &nota3, &peso3);

    media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

    if(media < 3){
        printf("O aluno foi REPROVADO com média %.2lf\n", media);
    }
    else if(media >= 7){
        printf("O aluno foi APROVADO com média %.2lf\n", media);
    }
    else if(media >= 3 && media < 7){
        printf("O aluno foi ficou em RECUPERAÇÃO com média de %.2lf precisando de %.2lf\n", media, 10-media);
    }

    return 0;
}