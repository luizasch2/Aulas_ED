#include <iostream>
// Vetores (array)
using namespace std;

int main(){
    
    int arriExemplo2[4];

    arriExemplo2[0] = 8;
    arriExemplo2[1] = 64;
    arriExemplo2[2] = 256;
    
    cout << "Valor: " << arriExemplo2[0] << "\nEndereco: " << &arriExemplo2[0] << endl;
    cout << "Valor: " << arriExemplo2[1] << "\nEndereco: " << &arriExemplo2[1] << endl;
    cout << "Valor: " << arriExemplo2[2] << "\nEndereco: " << &arriExemplo2[2] << endl;
    cout << "Valor: " << arriExemplo2[3] << "\nEndereco: " << &arriExemplo2[3] << endl;
    cout << "Valor: " << arriExemplo2[4] << "\nEndereco: " << &arriExemplo2[4] << endl;

    if (&arriExemplo2[0] == arriExemplo2) cout << "Verdade" << endl;

    //Array multidimensionais

    int arriExemplo1[2][3] = {7,1,4,71,0,92};
    int arriExemplo3[2][3] = {{7,1,4} ,{71,0,92}};

    for (int i=0; i<2; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout << "(" << i << "," << j << "): " << arriExemplo3[i][j] << "\tEndereço: " << &arriExemplo3[i][j] << endl;
        }
    }
    return 0;
}