#include <stdio.h>

int lerValores(int l, int c, int mat[l][c]){
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &mat[j][i]);
        }
    }
}

void imprimeValores(int l, int c, int mat[l][l]){
    printf("Transposta\n");

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main(){

    int linhas, colunas;

    scanf("%d %d", &linhas, &colunas);

    int matTrans[colunas][linhas];

    lerValores(colunas, linhas, matTrans);
    imprimeValores(colunas, linhas, matTrans);

    return 0;
}