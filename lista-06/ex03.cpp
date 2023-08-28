#include <iostream>
#include <cstring>

using namespace std;

int main(){

    string operacao, str1, str2, res;
    int pos, tamStr1;

    getline(cin, operacao);

    if(operacao == "strremove"){
        getline(cin, str1);
        getline(cin, str2);

        tamStr1 = str1.size();
        pos = str2.find("tes");
        res = str2.erase(pos, tamStr1+pos);

        cout << res << "\n";
    } else if(operacao == "strinsert"){
        getline(cin, str1);
        getline(cin, str2);
        cin >> pos;

        res.insert(0, str2);
        res.insert(pos, str1);

        cout << res << "\n";
    }

    return 0;
}