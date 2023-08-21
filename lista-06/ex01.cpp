#include <iostream>
#include <cstring>
#include <queue>

const int tam = 40;

void exibeResultados(int rep, std::queue <int> pos);
void modParaMaiusculas(char str[tam]);

int main(){

    char strA[tam], strB[tam];
    int repeticoes=0;
    std::queue <int> posicoes;

    std::cin.getline(strA, tam);
    std::cin.getline(strB, tam);
    modParaMaiusculas(strA);
    modParaMaiusculas(strB);

    int j = 0;

    for(int i = 0; i < strlen(strB); i++){
        if(strA[j] == strB[i]){
            j++;
        } else{
            j = 0;
            if(strA[j] == strB[i]){
                j++;
            }
        }

        if(j == strlen(strA)){
            posicoes.push(i- (strlen(strA) - 1));
            repeticoes++;
        }
    }

    exibeResultados(repeticoes, posicoes);

    return 0;
}

void exibeResultados(int rep, std::queue <int> pos){
    if(rep > 0){
        std::cout << "Repetições: " << rep << "\n";

        std::cout << "Posições:";
        while(!pos.empty()){
            std::cout << " " << pos.front();
            pos.pop();
        }
    } else{
        std::cout << "Repetições: 0\n";
    }

}

void modParaMaiusculas(char str[tam]){
    int i = 0;

    while(str[i] != '\0'){
        str[i] = toupper(str[i]);
        i++;
    }
}
