#include <iostream>

using namespace std;

/*namespace EMAp
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
}*/


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

int iValor = 10;

int main()
{
    /*
    int iValor = 1;
    EMAp::mockFunction();
    FGV::mockFunction();

    cout << "EMAp: " << EMAp::iValor << endl;
    cout << "FGV: " << FGV::iValor << endl;
    cout << "Global: " << ::iValor << endl;
    cout << "Local: " << iValor << endl;*/

    FGV::EMAp::mockFunction();
    FGV::mockFunction();

}