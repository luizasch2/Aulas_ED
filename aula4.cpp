#include <iostream>

//condições e repetições

using namespace std;

int main(){

int iValor = 42, iValorlido = 0, iResultado = 0;
cin >> iValorlido;

iResultado = (iValorlido < iValor) ? 0 : 1; //operador ternário

cout << iResultado << endl;

//switch case

int iDia = 3;

switch (iDia)
{
    case 1:
        cout << "Segunda" << endl;
        break;
    case 2:
        cout << "Terca" << endl;
        break;
    case 3:
        cout << "Quarta" << endl;
        break;
    case 4:
        cout << "Quinta" << endl;
        break;
    case 5:
        cout << "Sexta" << endl;
        break;
    case 6:
        cout << "Sabado" << endl;
        break;
    case 7:
        cout << "Domingo" << endl;
    
    default:
        cout << "Se nenhum caso é atingido, ele vai p default";

}


cout << "---------------------" << endl;

int iContador = 0;
while (iContador < 5)
{
    cout << iContador << endl;
    iContador++;
}

cout << "---------------------" << endl;

int iContador2 = 0;

do
{
    cout << iContador2 << endl;
    iContador2++;
}while (iContador2 < 5);


cout << "---------------------" << endl;

for (int i = 0; i<=2; i++)
{
    for (int j=0; j<=2;j++)
    {
        cout << "(" << i << "," << j << ")" << endl;
    }
}
}