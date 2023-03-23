#include <iostream>

using namespace std;

//Solicitar um número do usuário e impirma esta quantidade de números ímpares


int main(){
    int n;
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        cout << 2*i - 1 << endl;
    }
}