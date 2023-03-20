#include <iostream>

using namespace std;

int main(){
    int iHf;
    int iHi;

    cin >> iHi >> iHf;

    if (iHf == iHi){
        cout << "O JOGO DUROU 24 HORA(S)";
    }

    else if (iHf > iHi){
        cout << "O JOGO DUROU " << iHf - iHi << " HORAS";
    }

    else if (iHi > iHf){
        cout << "O JOGO DUROU " << iHi - iHf << " HORAS";
    }

    return 0;
}