#include <iostream>

//enumeração

using namespace std;



int main()
{
    enum Streaming {AppleTV, AmazonPrime, CrunchyRoll, DisneyPlus, HBO, Netflix}; //Agora temos um tipo Streaming

    Streaming streamingSubscription = HBO;

    switch (streamingSubscription)
    {
    case AppleTV:
        cout << "É tudo muito estranho... [" << streamingSubscription << "]" << endl;
        break;

    case DisneyPlus:
        cout << "É tudo muito estranho... [" << streamingSubscription << "]" << endl;
     
    default:
        cout << "É melhor ler um livro [" << streamingSubscription << "]" << endl;
    }

    
    enum Meses {Janeiro, Fevereiro, Marco, Abril, Maio, Junho, Julho, Agosto, Setembro, Outubro, Novembro, Dezembro};

    Meses mes = Maio;

    cout << mes << endl;

    // Flag -> note que se segunda é 10, automaticamente terca vai ser 11 por conta do auto incremento
    enum Dias {Segunda = 10, Terca, Quarta = 3, Quinta = -3, Sexta, Sabado, Domingo};

    Dias dia = Terca;

    cout << dia << endl;


}


