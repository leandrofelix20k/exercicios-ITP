#include <stdio.h>
#define tam 7

// Solução do professor

int max(int x, int y) {
  return (x > y ? x : y);
}

int min(int x, int y) {
  return (x < y ? x : y);
}

void pintaPreto(int img[tam][tam], int l_ini, int c_ini, int l_fim, int c_fim) {
  if (l_ini != l_fim && c_ini == c_fim)
    for (int l = min(l_ini, l_fim); l <= max(l_ini, l_fim); l++)
      img[l][c_ini] = 1;
  if (c_ini != c_fim && l_ini == l_fim)
    for (int c = min(c_ini, c_fim); c <= max(c_ini, c_fim); c++)
      img[l_ini][c] = 1;
}

void desenhaImagem(int img[tam][tam]) {
  for (int l = 0; l < tam; l++) {
    for (int c = 0; c < tam; c++)
      printf(img[l][c] ? "#" : "_");
    printf("\n");
  }
  printf("\n");
}

int main(void) {
  int imagem[tam][tam] = {0};
  int l_ini = -1, c_ini = -1, l_fim = -1, c_fim = -1;
  scanf ("%d %d", &l_ini, &c_ini);
  if(l_ini != -1 || c_ini != -1){
    scanf ("%d %d", &l_fim, &c_fim);
    while (l_fim != -1 || c_fim != -1){
      pintaPreto(imagem, l_ini, c_ini, l_fim, c_fim);
      l_ini = l_fim;
      c_ini = c_fim;
      scanf ("%d %d", &l_fim, &c_fim);
    }
  }
  desenhaImagem(imagem);
  return 0;
};
