#include <iostream>
//Referencia
using namespace std;

void troca1(int&, int&);
void troca2(int&, int&);

int main()
{
    string strNome = "Yuri Saporito";
    int iValor = 42;

    cout << "Valor da String: " << strNome << ". Endereco da string: " << &strNome << endl;
    cout << "Valor do Inteiro: " << iValor << ". Endereco da string: " << &iValor << endl;  
    cout << "=============================================" << endl << endl;

    string& strrefNome = strNome;
    int& irefValor = iValor;
    

    cout << "Valor da refString: " << strrefNome << ". Endereco da string: " << &strNome << endl;
    cout << "Valor do refInteiro: " << irefValor << ". Endereco da string: " << &iValor << endl;  
    cout << "=============================================" << endl << endl;

    strrefNome = "Camacho";
    irefValor = 666;

    cout << "Valor da refString: " << strNome << ". Endereco da string: " << &strNome << endl;
    cout << "Valor do refInteiro: " << iValor << ". Endereco da string: " << &iValor << endl;  
    cout << "=============================================" << endl << endl;

    int iNum1 = 7;
    int iNum2 = 42;

    cout << "iNum1: " << iNum1 << endl;
    cout << "iNum2: " << iNum2 << endl;

    troca1(iNum1, iNum2);

    cout << "iNum1 apos troca1: " << iNum1 << endl;
    cout << "iNum2 apos troca1: " << iNum2 << endl;

    troca2(iNum1, iNum2);

    cout << "iNum1 apos troca2: " << iNum1 << endl;
    cout << "iNum2 apos troca2: " << iNum2 << endl;


}

void troca1(int& irefValor1, int& irefValor2)
{
    int iTemp = irefValor1;
    irefValor1 = irefValor2;
    irefValor2 = iTemp;
}

void troca2(int& irefValor1, int& irefValor2)
{
    irefValor1 = irefValor2 + irefValor2; //irefValor1 = 49
    irefValor2 = irefValor1 - irefValor2; //irefValor2 = 42
    irefValor1 = irefValor1 - irefValor2; //irefValor1 = 7
}