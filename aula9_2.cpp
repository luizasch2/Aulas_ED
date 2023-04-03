#include <iostream>

using namespace std;

struct Livro
{
    string strTitulo;
    string strAutor;
    int iDataPublicacao;
};

struct Dot
{
    unsigned short usRed;
    unsigned short usGreen;
    unsigned short usBlue;
};

struct Biblioteca
{
    string strNome;
    int iTamanhoAcervo;
    struct Livro livros[1000];
};

void adicionarLivros(struct Biblioteca, struct Livro);
void listarLivros(struct Biblioteca);


int main()
{
    struct Biblioteca biblioteca;
    biblioteca.strNome = "Biblioteca da EMAP";
    biblioteca.iTamanhoAcervo = 0;

    struct Livro livro1;
    livro1.strTitulo = "Outlier";
    livro1.strAutor = "Malcom Gladwell";
    livro1.iDataPublicacao = 2008;

    biblioteca.livros[biblioteca.iTamanhoAcervo] = livro1;
    biblioteca.iTamanhoAcervo += 1;

    struct Livro livro2;
    livro2.strTitulo = "How to Grow Old";
    livro2.strAutor = "Gilbert Strang";
    livro2.iDataPublicacao = 2006;

    biblioteca.livros[biblioteca.iTamanhoAcervo] = livro2;
    biblioteca.iTamanhoAcervo += 1;

    cout << "Nome: " << biblioteca.strNome << endl;
    cout << "Tamanho do acervo: " << biblioteca.iTamanhoAcervo << endl;

    listarLivros(biblioteca);


    struct Livro livro3;
    livro2.strTitulo = "Linear Algebra";
    livro2.strAutor = "James Strang";
    livro2.iDataPublicacao = 2018;

    adicionarLivros(biblioteca, livro3);


/*
    cout << livro1.strTitulo << ", by " << livro1.strAutor << ". Published in " << livro1.iDataPublicacao << endl;

    cout << livro2.strTitulo << ", by " << livro2.strAutor << ". Published in " << livro2.iDataPublicacao << endl;
    
    
    struct Dot screen[640][480];
    screen[0][0].usRed = 0;
    screen[0][0].usGreen = 0;
    screen[0][0].usBlue = 0;

    screen[0][1] = {255,192,203};

    cout << "RGB(" << screen[0][0].usRed << "," << screen[0][0].usGreen << "," << screen[0][0].usBlue << ")" << endl;

    cout << "RGB(" << screen[0][1].usRed << "," << screen[0][1].usGreen << "," << screen[0][1].usBlue << ")" << endl;
    */
}

void adicionarLivros(struct Biblioteca biblioteca, struct Livro livroAdicioado)
{
    biblioteca.livros[biblioteca.iTamanhoAcervo] = livroAdicioado;
    biblioteca.iTamanhoAcervo+=1;
}

void listarLivros(struct Biblioteca biblioteca)
{
    cout << "Livros do Acervo: " << endl;
    for (int i = 0; i<biblioteca.iTamanhoAcervo; i++)
    {
        cout << "\t" << biblioteca.livros[i].strTitulo << ", by " << biblioteca.livros[i].strAutor << ". Published in " << biblioteca.livros[i].iDataPublicacao << "." << endl;
    }
}