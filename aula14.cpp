#include <iostream>

// Pilha

using namespace std;

struct Node
{
    int data;
    struct Node* ptrNextNode;
};

struct Node* ptrTopNode = nullptr; //aponta onde esta o elemento do topo -> como fizemos variavel global conhecemos o topo, não é necessário passar para as funções, todos tem acesso à essa variável

void display();
void push(int);
void pop();


int main()
{
    display();
    cout << "===================" << endl;
    
    push(7);
    push(42);
    push(66);
    display();
    cout << "===================" << endl;

    pop();
    display();
    cout << "===================" << endl;

    pop();
    display();
    cout << "===================" << endl;

    pop();
    display();
    cout << "===================" << endl;

    return 0;
}

void display()
{
    Node* ptrNode = nullptr;
    if (ptrTopNode == nullptr) cout << "Pilha esta vazia! " << endl;

    else
    {
        ptrNode = ptrTopNode;

        cout << "Elementos da pilha: ";

        while (ptrNode != nullptr)
        {
            cout << ptrNode -> data << " ";
            ptrNode = ptrNode->ptrNextNode;
        }
        cout << endl;
    }
}

void push(int iVal)
{
    //Parte 1a: criacao da estrutura
    Node* newNode = (Node*) malloc(sizeof(Node));
    //Parte 1b: atribuição da carga (payload)
    newNode->data = iVal;
    newNode->ptrNextNode = ptrTopNode;
    ptrTopNode = newNode;
    
}

void pop()
{
    if (ptrTopNode == nullptr) cout << "Pilha esta vazia" << endl;
    else
    {
        cout << "Elemento removido: " << ptrTopNode->data << endl;

        struct Node* tmpPTR = ptrTopNode;

        ptrTopNode = ptrTopNode->ptrNextNode;

        free(tmpPTR);
    }
}