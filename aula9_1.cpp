#include <iostream>
//Estruturas
using namespace std;

int main()
{
    struct 
    {
        int iIdade;
        string strNome;
    } alunoEmap1;
    
    alunoEmap1.iIdade = 19;
    alunoEmap1.strNome = "Guilherme";

    cout << "Idade do aluno: " << alunoEmap1.iIdade << endl;
    cout << "Nome do aluno: " << alunoEmap1.strNome << endl;

    struct 
    {
        int iIdade;
        string strNome;
    } alunoEmap2, alunoEmap3;

    alunoEmap2.iIdade = 22;
    alunoEmap2.strNome = "Matheus";

    


}