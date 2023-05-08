#include <iostream>

// Lista duplamente encadeada

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


    return 0;
}