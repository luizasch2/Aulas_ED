#include <iostream>
//Funções pt. 2
using namespace std;

int soma(int, int);
int soma(int, int, int);

int main(){


    int iNum1 = 7;
    int iNum2 = 42;
    int iNum3 = 5;

    float fNum1 = 9.8;
    float fNum2 = 0.3;
    
    cout << soma(iNum1, iNum2) << endl;
    cout << soma(iNum1, iNum2, iNum3) << endl;
    cout << soma(fNum1, fNum2) << endl;
}

int soma(int iValor1, int iValor2)
{
    return iValor1+iValor2;
}

int soma(int iValor1, int iValor2, int iValor3)
{
    return iValor1+iValor2+iValor3;
}

float soma(float fValor1, float fValor2)
{
    return fValor1 + fValor2;
}