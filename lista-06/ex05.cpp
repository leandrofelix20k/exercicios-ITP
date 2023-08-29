#include <iostream>
#include <cstring>

using namespace std;

int main(){

    string strEntrada, strSaida1, strSaida2;
    char caracterSeparador[2];

    getline(cin, strEntrada);
    cin >> caracterSeparador;

    for(int i=0; i < strEntrada.size(); i++){
        if(strEntrada[i] == caracterSeparador[0]){
            strSaida1 = strEntrada.substr(0, i);
            strSaida2 = strEntrada.substr(i+1);
        }
    }

    cout << "Primeira parte: " << strSaida1 << "\n";
    cout << "Segunda parte: " << strSaida2 << "\n";

    return 0;
}