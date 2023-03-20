#include <iostream>

//Armazenamento de variáveis

using namespace std;

int main(){
    
    string strValue1 = "Eu adoro a";
    string strValue2 = "EMAp";

    cout << "strValue1: "<< strValue1 << "\nTamanho strValue1: " << sizeof(strValue1) << endl;
    cout << "strValue2: "<< strValue2 << "\nTamanho strValue2: " << sizeof(strValue2) << endl;

    bool bValue1 = true;
    bool bValue2 = false;
    bool bValue3 = 42;
    bool bValue4 = 0;

    // qualquer coisa que não seja false vi retornar 1


    cout << "bValue1: "<< bValue1 << "\nTamanho bValue1: " << sizeof(bValue1) << endl;
    cout << "bValue2: "<< bValue2 << "\nTamanho bValue2: " << sizeof(bValue2) << endl;
    cout << "bValue3: "<< bValue3 << "\nTamanho bValue3: " << sizeof(bValue3) << endl;
    cout << "bValue4: "<< bValue4 << "\nTamanho bValue4: " << sizeof(bValue4) << endl;

    unsigned char ucValor = 125;
    cout << "ucValor: " << int(ucValor) << endl;

    ucValor += 125;
    cout << "ucValor: " << int(ucValor) << endl;

    ucValor += 5;
    cout << "ucValor: " << int(ucValor) << endl;

    ucValor += 1;
    cout << "ucValor: " << int(ucValor) << endl;

    //com char teriamos numeros negativos


    
}



