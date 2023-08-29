#include <iostream>
#include <cstring>

using namespace std;

int main(){

    string str, strConcat;

    do{
        getline(cin, str);
        strConcat = strConcat + str;
    } while(str != "\0");

    cout << strConcat << "\n";

    return 0;
}