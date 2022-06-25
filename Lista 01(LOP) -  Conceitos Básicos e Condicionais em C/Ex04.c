#include <stdio.h>

int main(){
    int a, b, c, d;
    int cond1=0, cond2=0, cond3=0, cond4=0;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(b>c) cond1 = 1;
    if(d>a) cond2 = 1;
    if((c+d)>(a+b)) cond3 = 1;
    if(c>0 && d>0) cond4 =1;

    if(cond1==1 && cond2==1 && cond3==1 && cond4==1)
        printf("Valores Aceitos");
    else if((!cond1==1 && cond2==1 && cond3==1 && cond4==1))
        printf("Valores Não Aceitos condições violadas: 1 2 3 4");
    else if(cond1==0)
        printf("Valores Não Aceitos condições violadas: 1");
    else if(cond1==0 && cond2==0 && cond3==0)
        printf("Valores Não Aceitos condições violadas: 1 2 3");
    else if(cond3==0 && cond4==0)
        printf("Valores Não Aceitos condições violadas: 3 4");
    

    return 0;
}