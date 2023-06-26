#include <stdio.h>

int main(){
    char char1, char2, operador;

    scanf("%c %c %c", &char1, &operador, &char2);

    printf("-------\n");
    printf("|%c|%c|r|\n", char1, char2);

    if(operador == '&'){
        printf("+-+-+-+\n");
        printf("|0|0|0|\n");
        printf("+-+-+-+\n");
        printf("|0|1|0|\n");
        printf("+-+-+-+\n");
        printf("|1|0|0|\n");
        printf("+-+-+-+\n");
        printf("|1|1|1|\n");
    }
    if(operador == '|'){
        printf("+-+-+-+\n");
        printf("|0|0|0|\n");
        printf("+-+-+-+\n");
        printf("|0|1|1|\n");
        printf("+-+-+-+\n");
        printf("|1|0|1|\n");
        printf("+-+-+-+\n");
        printf("|1|1|1|\n");
    }

if(operador == '^'){
        printf("+-+-+-+\n");
        printf("|0|0|0|\n");;
        printf("+-+-+-+\n");
        printf("|0|1|1|\n");
        printf("+-+-+-+\n");
        printf("|1|0|1|\n");
        printf("+-+-+-+\n");
        printf("|1|1|0|\n");
    }
    printf("-------\n");
    return 0;
}