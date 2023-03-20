#include <iostream>
#include <cmath>
//Funções
using namespace std;

void frasePreferida()
{
    cout << "Eu adoro a EMAp" << endl;
}

void montarFrase(char chArtigo = 'a', string strPalavra = "EMAp")
{
    cout << "Eu adoro " << chArtigo << " " << strPalavra << "!" << endl;
}

int potenciacao(int iBase, int iExpoente)
{
    return pow(iBase, iExpoente);
}


int modulo(int iValor)
{
    return abs(iValor)
}

int main()
{
    frasePreferida();
    frasePreferida();

    cout << "==================" << endl;

    montarFrase('o',"Yuri");
    montarFrase();
    montarFrase('o');

    //montarFrase("teste"); -> vai dar erro pq entende como primeiro parâmetro

    cout << "==================" << endl;

    cout << potenciacao(2,10) << endl;

    cout << modulo(42) << endl;
    cout << modulo(-42) << endl;
    cout << modulo(42.5) << endl;
}
