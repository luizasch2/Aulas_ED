#include <iostream>
#include <cmath>

using namespace std;

//Solicitar um número do usuário e impirma esta quantidade de números primos

bool verificadorPrimo(int n)
{
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;   
}

int main(){
    int iN;
    cin >> iN;


    for (int i=2; i<iN; i++)
    {
        if (verificadorPrimo(i)){
            cout << i << endl;
        }
    }
}