#include <stdio.h>
int soma(int N){
    int x = 0;

    for(int i = 1; i <= N; i++){
    x = x + i;
    }

    return x;
}
int main(){
    int N, x;

    scanf("%d", &N);
    x = soma(N);

    printf("%d \n", x);

    return 0;
}