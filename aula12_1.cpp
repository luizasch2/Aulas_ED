#include <iostream>

using namespace std;

int main()
{
    int arriValores[5] = {0,7,13,42,666};

    cout << "Endereço de V[0]: " << arriValores << endl;

    int* ptrArrayValores1 = arriValores;

    cout << "PTR: " << ptrArrayValores1 << endl;

    int* ptrArrayValores2  = &arriValores[0];

    cout << "PTR2" << ptrArrayValores2 << endl;

    if (ptrArrayValores1 == ptrArrayValores2) cout << "São iguais!" << endl;
    cout << "====================================================" << endl;


    cout << "Valor de ptrArrayValores1[0]: " << *ptrArrayValores1 << endl;

    cout << "Endereço de ptrArrayValores1[0]: " << ptrArrayValores1 << endl;


    // //Algo estranho (29 e 31)
    // cout << "Valor de ptrArrayValores1[1]: " << *ptrArrayValores1 << endl;

    // cout << "Endereço de ptrArrayValores1[1]: " << ++ptrArrayValores1 << endl;

    ptrArrayValores1 += 1;

    cout << "Valor de ptrArrayValores[1]: " << *ptrArrayValores1 << endl;
    cout << "Endereço de ptrArrayValores1[1]: " << ++ptrArrayValores1 << endl;

    ptrArrayValores1 += 1;

    cout << "Valor de ptrArrayValores[3]: " << *ptrArrayValores1 << endl;
    cout << "Endereço de ptrArrayValores1[3]: " << ++ptrArrayValores1 << endl;


    ptrArrayValores1 -= 2;

    cout << "Valor de ptrArrayValores[1]: " << *ptrArrayValores1 << endl;
    cout << "Endereço de ptrArrayValores1[1]: " << ++ptrArrayValores1 << endl;


    cout << "\n Valor estranho: " << ptrArrayValores1 - ptrArrayValores2 << endl;

    
    
  
}