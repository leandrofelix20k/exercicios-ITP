#include <iostream>

using namespace std;

void imprimeLevel(int);

int main(){

    int velocidade, quantidadeLesma, maior=0;

    cin >> quantidadeLesma;

    for(int i=0; i<quantidadeLesma; i++){
        cin >> velocidade;

        if(velocidade > maior){
            maior = velocidade;
        }
    }

    imprimeLevel(maior);

    return 0;
}

void imprimeLevel(int m){
    if(m<10){
        cout << "Level 1\n";
    } else if(m < 20){
        cout << "Level 2\n";
    } else{
        cout << "Level 3\n";
    }
}
