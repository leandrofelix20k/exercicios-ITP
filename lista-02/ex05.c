#include <stdio.h>

int main(){
  int n;
  char c;
  scanf("%d %c", &n, &c);
  n = n - 1;
  int mid = n / 2;

  for(int linha=0; linha<mid; linha++){
    for(int coluna=0; coluna<mid; coluna++){
      if(linha == coluna){
        printf("%c", c);
      } else {
        printf(" ");
      }
    }
    for(int coluna=mid-1; coluna>=0; coluna--){
      if(linha == coluna){
        printf("%c", c);
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
  for(int linha=mid-1; linha>=0; linha--){
    for(int coluna=0; coluna<mid; coluna++){
      if(linha == coluna){
        printf("%c", c);
      } else {
        printf(" ");
      }
    }
    for(int coluna=mid-1; coluna>=0; coluna--){
      if(linha == coluna){
        printf("%c", c);
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}