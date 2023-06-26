#include <stdio.h>

int main(){
    int a, b, c, d;
    int cond1=0, cond2=0, cond3=0, cond4=0;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(b>c) cond1 = 1;
    if(d>a) cond2 = 1;
    if((c+d)>(a+b)) cond3 = 1;
    if(c>0&&d>0) cond4 = 1;

    if(cond1==1 && cond2==1 && cond3 ==1 && cond4==1){
        printf("Valores aceitos\n");
    }
    else{
        printf("Valores não aceitos condições violadas: ");
        if(cond1 == 0){
            printf("1 ");
        }
        if(cond2 == 0){
            printf("2 ");
        }
        if(cond3 == 0){
            printf("3 ");
        }
        if(cond4 == 0){
            printf("4 ");
        }
        printf("\n");
    }

    return 0;
}

/*
#include <stdio.h>
#include <stdbool.h>

int main(){
    int a, b, c, d;
    bool c1 = false, c2 = false, c3 = false, c4 = false;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    c1 = b > c;
    c2 = d > a;
    c3 = (c + d) > (a + b);
    c4 = c >= 0 && d >=0;

    if(c1 && c2 && c3 && c4)
        printf("Valores Aceitos\n");
    else
        printf("Valores Não Aceitos condições violadas: ");
    if(!c1)
        printf("1 ");
    if(!c2)
        printf("2 ");
    if(!c3)
        printf("3 ");
    if(!c4)
        printf("4 ");
    printf("\n");
    return 0;
}
*/
