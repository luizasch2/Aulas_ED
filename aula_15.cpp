#include <iostream>

// Lista duplamente encadeada - da aula 15 a 16

using namespace std;


//DEVER 1: Elaborar função auxiliar que cria um nó
//DEVER 2: criar uma lista duplamente encadeada com head e tail

struct Node
{
    int iData;
    struct Node* ptrNext;
    struct Node* ptrPrev;
};

void insertFront(struct Node** head, int iPayload)
{
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

    newNode -> iData = iPayload;
    newNode -> ptrNext = (*head);
    newNode -> ptrPrev  = nullptr;

    if ((*head) != nullptr) (*head) -> ptrPrev = newNode;
    (*head) = newNode;
}

void displayList(struct Node* head)
{
    if(head == nullptr)
    {
        cout << "Lista vazia!!" << endl;
        return;
    }

    else if (head->ptrPrev != nullptr)
    {
        cout << "Meio da lista" << endl;
        return;
    }

    cout << "Payload: ";

    while (head != nullptr)
    {
        cout << head->iData << " ";
        head = head->ptrNext;
    }

    cout << endl;
}

void insertEnd(struct Node** head, int iPayload)
{
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode -> iData = iPayload;
    newNode -> ptrNext = nullptr;

    //Se head é vazio, então newNode é o novo head
    if (*head == nullptr)
    {
        newNode -> ptrPrev = nullptr;
        (*head) = newNode;
        return;
    }

    struct Node* ptrTemp = (*head); //caso a lista não for vazia tenho que caminhar por ela. Farei isso com esse ptr, para não alterar o head

    while (ptrTemp ->ptrNext != nullptr) 
    {
        ptrTemp = ptrTemp->ptrNext;
    }

    ptrTemp->ptrNext = newNode;
    newNode->ptrPrev = ptrTemp;
    
}

void deleteFirst(struct Node** head) //apaga o primeiro elemento da lista
{
    if (*head == nullptr)
    {
        cout << "Não é possivel remover: lista vazia" << endl;
        return;
    }

    struct Node* ptrTemp = (*head);

    (*head) = (*head)->ptrNext;

    if (*head != nullptr) (*head)->ptrPrev = nullptr;


    free(ptrTemp);
}

void deleteLast(struct Node** head) //apaga o ultimo elemento da lista
{
    if (*head == nullptr)
    {
        cout << "Não é possivel remover: lista vazia" << endl;
        return;
    }

    struct Node* ptrTemp = (*head);

    while (ptrTemp->ptrNext != nullptr) ptrTemp = ptrTemp-> ptrNext;

    if (ptrTemp->ptrPrev != nullptr)
    {
        ptrTemp->ptrPrev->ptrNext = nullptr;

    }

    else
    {
        (*head) == nullptr;
    }

    free(ptrTemp);
}

void insertAfter(struct Node* ptrLocation, int iPayload)
{
    if (ptrLocation == nullptr)
    {
        cout << "Não foi possível realizar a inserção" << endl;
        return;
    }

    // Insere o novo nó
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode -> iData = iPayload;
    newNode -> ptrNext = ptrLocation->ptrNext;
    newNode -> ptrPrev = ptrLocation;

    // Corrigindo o ponto de inserção

    ptrLocation->ptrNext = newNode;
    if (newNode->ptrNext != nullptr) newNode->ptrNext->ptrPrev = newNode;
}

void deleteNode(struct Node** head, struct Node* ptrDelete)
{
    if (*head == nullptr || ptrDelete == nullptr)
    {
        cout << "Não foi possível remover o nó" << endl;
        return;
    }

    if (*head == ptrDelete) *head = ptrDelete->ptrNext; //caso em que o ponteiro que quero apagar é head -> dois casos: é o unico da lista ou não é

    if (ptrDelete->ptrNext != nullptr) ptrDelete->ptrNext->ptrPrev = ptrDelete->ptrPrev;
    
    if (ptrDelete->ptrPrev != nullptr) ptrDelete -> ptrPrev -> ptrNext = ptrDelete->ptrNext;

    free(ptrDelete);
}

int main()
{
    //Inicializando a lista
    struct Node* head = nullptr;
    displayList(head);
    cout << "====================" << endl;


    insertEnd(&head, 0);
    insertFront(&head, 1);
    insertEnd(&head, 7);
    insertFront(&head, 42);
    insertEnd(&head, 66);
    displayList(head);

    // Esperamos 42 1 0 7 66
    cout << "=======================" << endl;

    deleteFirst(&head);
    displayList(head);
    cout << "=======================" << endl;

    deleteLast(&head);
    displayList(head);

    cout << "=======================" << endl;

    insertAfter(head, 11);
    insertAfter(head->ptrNext->ptrNext, 90);
    insertAfter(head->ptrNext, 32);
    displayList(head);

    cout << "=======================" << endl;

    deleteNode(&head, head);
    deleteNode(&head, head->ptrNext);
    displayList(head);

    cout << "=======================" << endl;

    deleteNode(&head, head->ptrNext->ptrNext->ptrNext->ptrNext);
    displayList(head);

    return 0;
}