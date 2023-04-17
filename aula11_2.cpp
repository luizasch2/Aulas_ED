#include <iostream>

using namespace std;

int cubo(int*);

int somaVetor(const int[], const size_t);

int somaVetor(const int*, const size_t);

int main()
{
    int iValor = 3;
    int iResultado = 0;

    iResultado = cubo(&iValor);

    cout << "Resultado: " << iResultado << endl;
    cout << "===============" << endl;

    int arriValores[3] = {0,1,2};
    iResultado = somaVetor(arriValores, 3);
    cout << "Resultado da soma de vetores: " << iResultado << endl;
    cout << "===============" << endl;


    return 0;
}

int cubo(int* const ptrNum)
{
    return (*ptrNum)*(*ptrNum)*(*ptrNum);
}

int somaVetor(const int* valores, const size_t tamVetor)
{
    return -1;
}