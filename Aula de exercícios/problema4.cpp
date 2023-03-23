#include <iostream>

using namespace std;
//Solicitar um palavra do usuáio e imprimir ao contrário

int main(){
    string strPalavra;
    cin >> strPalavra;

    for  (int i = strPalavra.length()-1; i>=0; i--)
    {
        cout << strPalavra[i];
    }

}
