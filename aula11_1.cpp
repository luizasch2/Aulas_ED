#include <iostream>

using namespace std;

int cubo(int&);

int main()
{
    int iNum1 = 42;
    int iNum2 = 666;

    //Ponteiro constante
    int* const ptrNum1 = &iNum1;
    *ptrNum1 = 7; // da certo pois iNum não é uma variável constante
    //ptrNum1 = &iNum2 -> vai dar erro pois ptrNum1 é um ponteiro constante

    //Ponteiro para uma constante
    const int* ptrNum2 = &iNum2;
    ptrNum2 = &iNum1; // da certo pois o ponteiro não é constante
    //*ptrNum2 = 0; -> da erro pois a variável é constante portanto não pode ter seu valor alterado

    const int* ptrNum3 = &iNum1;


    cout << "Endereço de iNum1: " << &iNum1 << endl;
    cout << "PTR3: " << ptrNum3 << endl;
    cout << "Valor de iNum1: " << iNum1 << endl;
    cout << "Valor de PTR3: " << *ptrNum3 << endl;
    cout << "====================";

    return 0;
}