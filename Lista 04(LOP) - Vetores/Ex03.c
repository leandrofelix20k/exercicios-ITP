#include <stdio.h>


void expressaoVetores(int numB[], int numC[], int numD[])
{
    int s1, s2, s3;

    s1 = numB[0] + numC[0] - (5 * numD[0]);
    s2 = numB[1] + numC[1] - (5 * numD[1]);
    s3 = numB[2] + numC[2] - (5 * numD[2]);

    printf("A = [%d,%d,%d]", s1,s2,s3);
}

int main(void) 
{
    int letraB[3];
    int letraC[3];
    int letraD[3];

    scanf("%d %d %d", &letraB[0], &letraB[1], &letraB[2]);
    scanf("%d %d %d", &letraC[0], &letraC[1], &letraC[2]);
    scanf("%d %d %d", &letraD[0], &letraD[1], &letraD[2]);

    expressaoVetores(letraB, letraC, letraD);

    return 0;
}