#include <iostream>

using namespace std;

//Solicitar um número para o usuário e retornar seu módulo sem usar a bliblioteca de matemática

int main()
{
    int n;
    cin >> n;

    if (n<0){
        cout << (-1)*n;
    }
    
    else if (n>=0){
        cout << n;
    }
}