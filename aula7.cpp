#include <iostream>

using std::cout;
using std::cin;
using std::endl;

unsigned int factorial(int);
unsigned int somaNatural(int);
unsigned int Fibonacci(int);

int main()
{
    int iNum;
    cout << "Digite um numero: ";
    cin >> iNum;
    
    cout << "O fatorial de " << iNum << ": " << factorial(iNum) << endl;

    cout << "A soma dos " << iNum << " primeiros naturais: " << somaNatural(iNum) << endl;

    cout << iNum << "-esimo numero da sequencia de fibonacci: " << Fibonacci(iNum) << endl; 
    return 0;
}

unsigned int factorial(int iNum)
{
    /*unsigned int uiResultado = 1;
    
    for(int i = 1; i <= n; i++)
    {
        uiResultado = uiResultado * i; //uiResultado *= i
    }
    return uiResultado; -> forma iterativa*/

    if (iNum == 1) return 1;

    return factorial(iNum - 1)*iNum;
}

unsigned int somaNatural(int n)
{
    if (n==0) return 0;

    return somaNatural(n-1) + n;
}

unsigned int Fibonacci(int n)
{
    /*
    if (n == 0) return 0;
    if (n == 1) return 1;

    int iInicio = 2;
    int iPrimeiro = 0;
    int iSegundo = 1;
    int iAtual = 0;

    while (iInicio <= n)
    {
        iAtual = iPrimeiro + iSegundo;
        iPrimeiro = iSegundo;
        iSegundo = iAtual;
        iInicio++;
    }
    return iAtual;  -> forma iterativa*/

    if (n == 0) return 0;
    if (n == 1) return 1;

    return Fibonacci(n-2) + Fibonacci(n-1);
}