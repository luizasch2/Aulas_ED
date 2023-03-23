#include <iostream>

using namespace std;

//Solicitar um numero do usuario e impirimir quantidade de digitos

int numDigitos(int);

int main(){
    int iN; 
    cin >> iN;  

    int cVetor = {char(iN)};
}

int numDigitos(int iNum)
{
    int iDigitos = 1;

    while (iNum/=10)
    {
        iDigitos++;
    }
}