#include <stdio.h>

void numParImpar(int *nPares, int *nImpares, int *tamPares, int *tamImpares, int *valores, int *TAM)
{
  int i, j=0, k=0;
  
  for(i=0; i <*TAM; i++){
    if(valores[i] % 2 == 0){
      nPares[j] = valores[i];
      j++;
    }
    else{
      nImpares[k] = valores[i];
      k++;
    }
  }
}

int main(void) 
{
  int TAM, i, j=0, k=0, tamPares=0, tamImpares=0;

  scanf("%d", &TAM);

  int valores[TAM];

  for(i=0; i<TAM; i++){
     scanf("%d", &valores[i]);
  }

  for(i=0; i<TAM; i++){
    if(valores[i] % 2 == 0){
      tamPares++;
    }
    else{
      tamImpares++;
    } 
  }
   
  int nPares[tamPares];
  int nImpares[tamImpares];

  numParImpar(nPares, nImpares, &tamPares, &tamImpares, valores, &TAM);

  printf("Números Pares:\n");
  for(i=0; i<tamPares; i++){
     printf("%d\n", nPares[i]);
  }

  printf("Números Impares:\n");
  for(i=0; i<tamImpares; i++){
     printf("%d\n", nImpares[i]);
  }
  
  return 0;
}
