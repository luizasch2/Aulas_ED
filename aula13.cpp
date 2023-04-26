#include <iostream>

// Fila

using namespace std;

struct Node 
{
    int iData;
    struct Node* next;
};

struct Fila // Estrutura que representa minha fila
{
    struct Node* front;
    struct Node* rear; 
};

struct Fila* novaFila()
{
    struct Fila* temp = (struct Fila*) malloc(sizeof(struct Fila));
    temp->front = nullptr;
    temp->rear = nullptr;

    return temp;
}

struct Node* novoNo(int iValor)
{
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp->iData = iValor;
    temp->next = nullptr;
}

void primeiroElemento(struct Fila* fila)
{
    cout << "Primeiro elemento da fila: " << ((fila->front != nullptr) ? (fila->front)->iData : -1) << endl; // fila->front é nullptr? se sim (fila->front)->iData, se nao, -1.
}

void ultiomElemento(struct Fila* fila)
{
    cout << "Ultimo elemento da fila: " << ((fila->rear != nullptr) ? (fila->rear)->iData : -1) << endl; // fila->front é nullptr? se sim (fila->front)->iData, se nao, -1.
}

void enfilerarFila(struct Fila* fila, int iValor)
{
    struct Node* temp = novoNo(iValor);
    if (fila->rear == nullptr) 
    {
        fila->front = temp;
        fila->rear = temp;
        //se a lista ta vazia então o primeiro elemento e o ultimo elemento serao iguais.
    }
    else 
    {
        fila->rear->next = temp;
        fila->rear = temp;
    }
}

void desenfilerarFila(struct Fila* fila) //na fila sempre removemos o primeiro elemento
{
    if (fila->front == nullptr) // tanto faz fazer fila->front e fila->rear nesse caso (fila vazia)
    {
        cout << "Fila vazia" << endl;
    }

    struct Node* temp = fila->front;

    fila->front = fila->front->next;

    if (fila->front == nullptr) fila->rear = nullptr; //arrumar rear em caso de fila vazia

    cout << "Desenfilerando " << temp->iData << endl;

    free(temp);
}

//DEVER 1: função printFila

int main()
{
    struct Fila* fila = novaFila();

    primeiroElemento(fila);
    ultiomElemento(fila);
    cout << "==========================" << endl;

    enfilerarFila(fila, 3);

    primeiroElemento(fila);
    ultiomElemento(fila);
    cout << "==========================" << endl;

    enfilerarFila(fila, 10);
    enfilerarFila(fila, 42);
    enfilerarFila(fila, 66);

    primeiroElemento(fila);
    ultiomElemento(fila);
    cout << "==========================" << endl;

    desenfilerarFila(fila);

    primeiroElemento(fila);
    ultiomElemento(fila);
    cout << "==========================" << endl;


    return 0;
}