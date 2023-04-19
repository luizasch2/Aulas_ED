#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node* next; // um nó aponta para outro no, funciona como se tivessem em alocação continua na teoria (como uma lista) 
    //ponteiro: segundo elemento do node é um ponteiro que aponta para o próximo node.
};

void printList(struct Node*);
void addToList(struct Node*, int);

int main()
{
    struct Node* cabeca = nullptr; //ponteiro que começa
    struct Node* segundo = nullptr;
    struct Node* terceiro = nullptr;

    cabeca = (struct Node*) malloc(sizeof(struct Node));
    segundo = (struct Node*) malloc(sizeof(struct Node));   
    terceiro = (struct Node*) malloc(sizeof(struct Node));


    cabeca -> data =  7; //cabeca.data (em python)
    cabeca -> next = segundo;

    segundo -> data = 42;
    segundo -> next = terceiro;

    terceiro -> data = 666;
    terceiro -> next = nullptr;


    printList(cabeca);
    cout << "----------------" << endl;
    addToList(cabeca, 777);
    printList(cabeca);
    cout << "----------------" << endl;
    addToList(cabeca, 2023);
    printList(cabeca);
    cout << "----------------" << endl;

    free(terceiro);
    free(segundo);
    free(cabeca);


    return 0;
}

void printList(struct Node* sNode) 
{
    while (sNode != nullptr) //estou no final quando meu ponteiro aponta para o nulo e quero ir até o final
    {
        cout << "Dado do nó: " << sNode->data << endl;

        sNode = sNode->next;
    }
}

void addToList(struct Node* elemento, int iValue)
{
    struct Node* proximo = nullptr;
    proximo = (struct Node*) malloc(sizeof(struct Node));
    proximo -> data = iValue;
    proximo -> next = nullptr;

    while (elemento->next != nullptr)
    {
        elemento = elemento->next;
    }

    elemento->next = proximo;
}