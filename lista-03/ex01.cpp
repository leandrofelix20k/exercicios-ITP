#include <iostream>

using namespace std;

int auxFat(int);
int somaFat(int, int);

int main(){

    int num1, num2, resultado;

    cin >> num1;
    cin >> num2;
    
    resultado = somaFat(num1, num2);

    printf("%d! + %d! = %d", num1, num2, resultado);

    return 0;
}

int auxFat(int n){
    int fat=1;

    for(int i=1; i < n+1; i++){
        fat = fat * i;
    }

    return fat;
}

int somaFat(int x, int y){
    int soma;

    x = auxFat(x);
    y = auxFat(y);

    soma = x + y;

    return soma;
}
