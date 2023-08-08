#include <iostream>

bool ehPrimoGemeo(int);

int main(){

    int num1, num2;

    std::cin >> num1;
    std::cin >> num2;

    for(int i=num1; i<num2+1; i++){
        if(ehPrimoGemeo(i)){
            std::cout << i << "\n";
        }
    }

    return 0;
}

bool ehPrimoGemeo(int n){
    int cont1=0, cont2=0;

    for(int i=1; i<n+1; i++){
        if(n % i == 0){
            cont1++;
        }
    }
    for(int i=1; i<n+3; i++){
        if((n+2) % i == 0){
            cont2++;
        }
    }

    if(cont1 == 2 && cont2 == 2){
        return true;
    }

    return false;
}
