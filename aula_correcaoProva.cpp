#include <iostream>
#include <cmath>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

void printList(Node* head)
{
    Node* current = head;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }

    cout << endl;
}

void insert(Node* head, int data)
{
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;

    Node* current = head;

    while (current->next != nullptr)
    {
        current = current->next;
    }

    current->next = newNode;
}


//Questao 2

// void rm(Node* head, int data)
// {
//     Node* current = head;
//     Node* previous = nullptr;

//     while (current != nullptr)
//     {
        
//     }
    
// }


//Questao 3

Node* switchFirst(Node* head)
{
    Node* current = head;
    Node* previous = nullptr;

    while (current->next != nullptr)
    {
        previous = current;
        current = current->next;
    }

    previous->next = head;

    current->next = head->next;
    head->next = nullptr;

    return current;
}

//Questao 4

Node* getIntersection(Node* head1,  Node* head2)
{
    Node* head = (Node*)malloc(sizeof(Node));
    Node* current1 = head1;
    Node* current2 = head2;

    while (current1 != nullptr)
    {
        while (current2 != nullptr)
        {
            if (current1->data == current2->data)
            {
                insert(head,current1->data);
            }
            current2 = current2->next;
        }

        current1 = current1->next;
        current2 = head2;
    }
}

//Questao 5

void deleteEntireList(Node* head)
{
    Node* current = head;

    while (current != nullptr)
    {
        Node* next = current->next;
        Node* previous = current;

        current = next;

        free(current);
    }
    
}

int main()
{
    Node* head = new Node;

    head->data = 100000;
    head->next = nullptr; // Inicialize o ponteiro 'next' do primeiro nó como nullptr

    for (int i = 1; i <= 9; i++)
    {
        insert(head, 100000 + i);
    }

    printList(head);

    head =  switchFirst(head);

    Node *head2 = (Node*)malloc(sizeof(Node));

    head2->data = 100000;

    for (int i=0;i<9;i++)
    {
        insert(head2, 100003 + 2*i);
    }

    printList(head2);
}
