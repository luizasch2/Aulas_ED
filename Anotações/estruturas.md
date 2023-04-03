# Estrutura

Podemos usar a struct para declarar uma variável, tal como fizemos na aula9_1.cpp

note que:

``` cpp
struct 
    {
        int iIdade;
        string strNome;
    } alunoEmap1;

```

Aqui estamos declarando uma variável alunoEmap1 que agrupa algumas informações

Para acossiar à variáveis:

``` cpp
    alunoEmap1.iIdade = 19;
    alunoEmap1.strNome = "Guilherme";

    cout << "Idade do aluno: " << alunoEmap1.iIdade << endl;
    cout << "Nome do aluno: " << alunoEmap1.strNome << endl;
```

Vamos analisar outro exemplo:

```cpp
struct Livro
{
    string strTitulo;
    string strAutor;
    int iDataPublicacao;
};
```

Podemos criar um tipo também, da seguinte forma:

```cpp
struct Livro livro1;
    livro1.strTitulo = "Outlier";
    livro1.strAutor = "Malcom Gladwell";
    livro1.iDataPublicacao = 2008;
```

Podemos ainda criar um estrutura aninhada, suponha agora uma estrutura de biblioteca.

```cpp
struct Biblioteca
{
    string strNome;
    int iTamanhoAcervo;
    struct Livro livros[1000];
};
```

Para adicionar um livro à minha biblioteca, basta:

```cpp
    biblioteca.livros[biblioteca.iTamanhoAcervo] = livro1;
    biblioteca.iTamanhoAcervo += 1;
``` 

Vamos criar uma função para listar os livros do acervo:


```cpp
void listarLivros(struct Biblioteca biblioteca)
{
    cout << "Livros do Acervo: " << endl;
    for (int i = 0; i<biblioteca.iTamanhoAcervo; i++)
    {
        cout << "\t" << biblioteca.livros[i].strTitulo << ", by " << biblioteca.livros[i].strAutor << ". Published in " << biblioteca.livros[i].iDataPublicacao << "." << endl;
    }
}
```
