#include <iostream>

using namespace std;

int cubo(int&);

int main()
{
    int iNum1 = 42;
    int iNum2 = 666;

    //Ponteiro constante
    int* const ptrNum1 = &iNum1;
    *ptrNum1 = 7;
    //ptrNum1 = &iNum2

    //Ponteiro para uma constante
    const int* ptrNum2 = &iNum2;
    ptrNum2 = &iNum1;
    //*ptrNum2 = 0;

    const int* ptrNum3 = &iNum1;


    cout << "Endereço de iNum1: " << &iNum1 << endl;
    cout << "PTR3: " << ptrNum3 << endl;
    cout << "Valor de iNum1: " << iNum1 << endl;
    cout << "Valor de PTR3: " << *ptrNum3 << endl;
    cout << "====================";

    return 0;
}