#include <iostream>
#include <iomanip>
#include <cstring>

float retornaMedia(char, float, float, float);
float mediaAntiga(float, float, float);
float mediaNova(float, float, float);

int main(){

    std::cout << std::fixed << std::setprecision(2);

    char tipoMedia;
    float nota1, nota2, nota3, media;

    std::cin >> tipoMedia;
    tipoMedia = toupper(tipoMedia);

    std::cin >> nota1;
    std::cin >> nota2;
    std::cin >> nota3;

    media = retornaMedia(tipoMedia, nota1, nota2, nota3);

    std::cout << media << "\n";

    return 0;
}

float retornaMedia(char tipo, float n1, float n2, float n3){
    float med;

    if(tipo == 'A'){
        med = mediaAntiga(n1, n2, n3);
    } else if(tipo = 'N'){
        med = mediaNova(n1, n2, n3);
    }

    return med;
}

float mediaAntiga(float n1, float n2, float n3){
    float med;

    med = ((n1 * 4) + (n2 * 5) + (n3 * 6)) / 15;

    return med;
}

float mediaNova(float n1, float n2, float n3){
    float med;

    med = (n1 + n2 + n3) / 3;

    return med;
}