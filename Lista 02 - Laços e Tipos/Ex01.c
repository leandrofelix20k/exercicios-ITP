#include <stdio.h>
#include <math.h>

int main(void) 
{
  double num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
  double soma, produto, medAritmetica, medHarmonica, medGeometrica;
  double erroHarmonico, erroGeometrico, erroMedio;
  char c = '%';

  scanf("%lf\n%lf\n%lf\n%lf\n%lf\n", &num1, &num2, &num3, &num4, &num5);
  scanf("%lf\n%lf\n%lf\n%lf\n%lf", &num6, &num7, &num8, &num9, &num10);
  
  soma = (num1 + num2 + num3 + num4 + num5 + num6 + num7 +  num8 + num9 + num10);
  produto = (num1 * num2 * num3 * num4 * num5 * num6 * num7 *  num8 * num9 * num10);
  
  medAritmetica = soma / (10);
  medHarmonica = (10) / ((1 / num1) + (1 / num2) + (1 / num3) + (1 / num4) + (1 / num5) + (1 / num6) + (1 / num7) + (1 / num8) + (1 / num9) + (1 / num10));
  medGeometrica = pow(produto, 1.0/10);

  erroHarmonico = (medHarmonica - medAritmetica) / (medAritmetica);
  erroGeometrico = (medGeometrica - medAritmetica) / (medAritmetica);
  erroMedio = ((erroHarmonico + erroGeometrico) / 2) * 100;
  
  printf("Média aritmética é %.2lf\n", medAritmetica);
  printf("Média harmônica é %.2lf\n", medHarmonica);
  printf("Média geométrica é %.2lf\n", medGeometrica);
  printf("Erro médio é %.2lf ", erroMedio);
  printf("%c\n", c);
  
 
  return 0;
}