#include <iostream>

//aula sobre variaveis
using namespace std;

int main(){
    /*int iNum = 42;
    cout << "Valor: " << iNum << endl;
    cout << "Endereco: " << &iNum<< endl;

    iNum = 7;
    cout << "Valor: " << iNum << endl;
    cout << "Endereco: " << &iNum<< endl;*/


    //inteiro, 4 bytes
    int iNum1 = 42;
    int iNum2 = 7;
    int iNum3 = 7;

    cout << "iNum1: " << iNum1 << "\n Tamanho iNum1: " << sizeof(iNum1) << endl;
    cout << "iNum2: " << iNum2 << "\n Tamanho iNum2: " << sizeof(iNum2) << endl;
    cout << "iNum3: " << iNum3 << "\n Tamanho iNum3: " << sizeof(iNum3) << endl;

    //short int
    short sNum1 = 42;

    cout << "sNum1: " << sNum1 << "\n Tamanho sNum1: " << sizeof(sNum1) << endl;

    //long long int
    long long llNum1 = 42;
    cout << "lNum1: " << llNum1 << "\n Tamanho lNum1: " << sizeof(llNum1) << endl;


    //Caracter
    char cValue = 'E';
    cout << "cValue: " << cValue << "\n Tamanho cValue: " << sizeof(cValue) << endl;
    cout << "(int) cValue: " << int(cValue) << endl;

    char cPalavraPreferida1 = 77;
    char cPalavraPreferida2 = 0x41;
    char cPalavraPreferida3 = 0b1110000;

    cout << cValue;
    cout << cPalavraPreferida1;
    cout << cPalavraPreferida2;
    cout << cPalavraPreferida3;

} 
