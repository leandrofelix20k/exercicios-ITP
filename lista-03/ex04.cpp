#include <iostream>

bool ehPrimo(int);

int main(){

    int quantidade, numeros;

    std::cin >> quantidade;

    for(int i=0; i<quantidade; i++){
        std::cin >> numeros;

        if(ehPrimo(numeros)){
            std::cout << numeros << " eh primo\n";
        } else{
            std::cout << numeros << " nao eh primo\n";
        }
    }

    return 0;
}

bool ehPrimo(int n){
    int cont=0;

    for(int i=1; i<n+1; i++){
        if(n % i == 0){
            cont++;
        }
    }

    if(cont != 2){
        return false;
    }

    return true;
}
