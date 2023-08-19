#include <stdio.h>

void lerMatriz(int l, int c, int m[l][c]){
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &m[i][j]);
        }
    }
}

void multiplicaMatrizes(int lA, int cA, int mA[lA][cA], int lB, int cB, int mB[lB][cB], int mR[lB][cB]){
    int total = 0;

    for(int i = 0; i < lA; i++){
        for(int j=0; j<cA; j++){
            for(int k=0; k<cA; k++){
                total += mA[i][k] * mB[k][j];
            }
            mR[i][j] = total;
            total=0;
        }
    }
}

void somaMatrizes(int lA, int cA, int mA[lA][cA], int lB, int cB, int mB[lB][cB], int mR[lB][cB]){
    for(int i=0; i < lA; i++){
        for(int j=0; j < cA; j++){
            mR[i][j] = mA[i][j] + mB[i][j];
        }
    }
}

void exibeResultado(int lR, int cR, int mR[lR][cR]){
    for(int i = 0; i < lR; i++){
        for(int j = 0; j < cR; j++){
            printf("%d ", mR[i][j]);
        }
        printf("\n");
    }
}

int main(){

    int linha1, coluna1;
    scanf("%d %d", &linha1, &coluna1);
    int mat1[linha1][coluna1];
    lerMatriz(linha1, coluna1, mat1);

    int linha2, coluna2;
    scanf("%d %d", &linha2, &coluna2);
    int mat2[linha2][coluna2];
    lerMatriz(linha2, coluna2, mat2);

    int linha3, coluna3;
    scanf("%d %d", &linha3, &coluna3);
    int mat3[linha3][coluna3];
    lerMatriz(linha3, coluna3, mat3);

    int linha4, coluna4;
    scanf("%d %d", &linha4, &coluna4);
    int mat4[linha4][coluna1];
    lerMatriz(linha4, coluna4, mat4);

    if(linha1 != coluna2 || linha2 != coluna3 || linha3 != coluna4){
        printf("Valor de alguma das multiplicações não pode ser calculado\n");
    } else if(linha1 != linha2 || linha2 != linha3){
        printf("Valor da soma não pode ser calculado\n");
    }else if(coluna1 != coluna2 || coluna2 != coluna3){
        printf("Valor da soma não pode ser calculado\n");
    } else{
        int matRF[linha1][coluna1];
        int matR1[linha1][coluna2];
        int matR2[linha2][coluna3];
        int matR3[linha3][coluna4];

        multiplicaMatrizes(linha1, coluna1, mat1, linha2, coluna2, mat2, matR1);
        multiplicaMatrizes(linha2, coluna2, mat2, linha3, coluna3, mat3, matR2);
        multiplicaMatrizes(linha3, coluna3, mat3, linha4, coluna4, mat4, matR3);

        somaMatrizes(linha1, coluna1, matR1, linha2, coluna2, matR2, matRF);
        somaMatrizes(linha1, coluna1, matR3, linha2, coluna2, matRF, matRF);

        exibeResultador(linha1, coluna1, matRF);
    }

    return 0;
}