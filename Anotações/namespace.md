# Namespace

Quando usamos 
```cpp
std::cout;
```

Estamos dizendo para o programa procurar o comando cout no escopo de std.

Isso pode ser substituído pelo namespace:

``` cpp
using namespace std;
```

Estamos chamando todos os comandos de std(cin, cout, string, etc.)

Posso criar meu próprio namespace também:

```cpp

namespace EMAp
{
    void mockFunction()
    {
        cout << "Namespace: EMAp";
    }
}

namespace FGV
{
    void mockFunction()
    {
        cout << "Namespace: FGV";
    }
} 
```
E agora se eu quiser chamar na main, o que posso fazer é:

```cpp
EMAp::mockFunction();
FGV::mockFunction();
```

Note que se tentar chamar apenas a mockFunction, vou gerar um erro pois ela não existe fora desse espaço.

Se eu declarar a mesma variável dentro da main, fora da main, dentro de cada namespace, ela existirá mesmo que tenha mesmo nome e valores diferentes. Para acessar cada uma devo indicar onde ela está:

```cpp
#include <iostream>

using namespace std;

namespace EMAp
{   
    int iValor = 1000;
    void mockFunction()
    {
        cout << "Namespace: EMAp" << endl;
    }
}

namespace FGV
{
    int iValor = 100;
    void mockFunction()
    {
        cout << "Namespace: FGV" << endl;
    }
}
using namespace EMAp;
using namespace FGV;

int iValor = 10;

int main()
{
    int iValor = 1;
    EMAp::mockFunction();
    FGV::mockFunction();

    cout << "EMAp: " << EMAp::iValor << endl;
    cout << "FGV: " << FGV::iValor << endl;
    cout << "Global: " << ::iValor << endl;
    cout << "Local: " << iValor << endl;
}
```

Note que iValor foi declarada quatro vezes com diferentes valores em locais diferenetes.

Podemos ainda aninahr namespace:

```cpp
namespace FGV
{
    int iValor = 100;
    void mockFunction()
    {
        cout << "Namespace: FGV" << endl;
    }
    namespace EMAp
{   
    int iValor = 1000;
    void mockFunction()
    {
        cout << "Namespace: EMAp" << endl;
    }
}
}
```
Assim, para usar algo de EMAp, chamaria da seguinte forma:
```cpp
FGV::EMAp::mockFunction();
```