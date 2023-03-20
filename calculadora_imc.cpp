#include <iostream>
//FAZER PROGRAMA IMC    
using namespace std;

int main(){     
    string strNome;
    float fPeso;
    float fAlura;
    float imc;
    
    cout << "Nome: ";
    cin >> strNome;
    cout << "Peso: ";
    cin >> fPeso;
    cout << "Altura: ";
    cin >> fAlura;

    imc = fPeso / (fAlura*fAlura);
    
    if (imc <= 18.5)
    {
        cout << strNome << " ,voce esta abaixo do peso normal" << endl;
    }

    else if (imc<=24.9 && imc>18.5)
    {
        cout << strNome << " ,voce esta no peso normal" << endl;      
    }

    else if (imc >= 25 && imc <= 29.9)
    {
        cout << strNome << " ,voce esta com excesso de peso";
    }
    
    else if (imc >= 30 && imc <= 34.9)
    {
        cout << strNome << " ,voce esta com obesidade classe I";
    }

    else if (imc>=35 && imc<=39.9)
    {
        cout << strNome << " ,voce esta com obesidade classe II";
    }

    else if (imc >= 40)
    {
        cout << strNome << " ,voce esta com obesidade classe III";
    }
    return 0;
}