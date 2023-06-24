#include <stdio.h>
#include <math.h>

int main(){

    double num=0, soma=0, produto=1, medAritmetica=0, medHarmonica=0, medGeometrica=0;
    double erroHarmonico, erroGeometrico, erroMedio;

    for(int i=0; i < 10; i++){
        scanf("%lf", &num);

        soma += num;
        produto = num * produto;
        medHarmonica += 1 / num;
    }

    medAritmetica = soma / 10;
    medHarmonica = 10 / medHarmonica;
    medGeometrica = pow(produto, 1.0/10);

    erroHarmonico = (medHarmonica - medAritmetica) / (medAritmetica);
    erroGeometrico = (medGeometrica - medAritmetica) / (medAritmetica);
    erroMedio = ((erroHarmonico + erroGeometrico) / 2) * 100;

    printf("Média aritmética é %.2lf\n", medAritmetica);
    printf("Média harmônica é %.2lf\n", medHarmonica);
    printf("Média geométrica é %.2lf\n", medGeometrica);
    printf("Erro médio é %.2lf %%", erroMedio);

    return 0;
}
