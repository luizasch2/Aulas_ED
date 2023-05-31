#include <iostream>

// Árvore

using namespace std;

/*****************

Root: Nó inicial de uma árvore
Child Node: Nó filho de outro nó
Parent: Nó pai de outro nó
Sibling: Nós com mesmo pai
Leaf Node: Nó sem filho
Ancestor Node: Qualquer um atrás que consiga ligar direto
******************/


struct Node
{
    int iPayload;
    struct Node* ptrLeft;
    struct Node* ptrRight;
};

struct Node* newNode(int iData)
{
    struct Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->iPayload = iData;
    newNode->ptrLeft = nullptr;
    newNode->ptrRight = nullptr;

    return newNode;
}

void traversePreOrder(struct Node* ptrStartingNode)
{
    if(ptrStartingNode != nullptr)
    {
        cout << " " << ptrStartingNode -> iPayload;
        traversePreOrder(ptrStartingNode -> ptrLeft);
        traversePreOrder(ptrStartingNode -> ptrRight);
    }
}

void traverseInOrder(Node* ptrStartingNode)
{
    if(ptrStartingNode != nullptr)
    {
        traverseInOrder(ptrStartingNode -> ptrLeft);
        cout << " " << ptrStartingNode -> iPayload;
        traverseInOrder(ptrStartingNode -> ptrRight);
    }
}

void traversePostOrder(struct Node* ptrStartingNode)
{
    if(ptrStartingNode != nullptr)
    {
        traversePreOrder(ptrStartingNode -> ptrLeft);
        traversePreOrder(ptrStartingNode -> ptrRight);
        cout << " " << ptrStartingNode -> iPayload;
    }
}

Node* searchNode(Node* node, int iData)
{
    if (node == nullptr) return node;

    else if (iData == node->iPayload) return node;

    else if (iData < node->iPayload) return searchNode(node->ptrLeft, iData);

    // caso nenhuma das condições ocorram, sabemos que é maior, logo pela direita
    else searchNode(node->ptrRight, iData);
}

int main()
{
    struct Node* root = newNode(42);

    // Árvore de busca binária
    root->ptrLeft = newNode(7);
    root->ptrRight = newNode(666);
    root->ptrRight->ptrLeft = newNode(1);
    root->ptrRight->ptrRight = newNode(13); 

    cout << "Atravessando a árvore - PreOrder: ";
    traversePreOrder(root);
    cout << endl;

    cout << "Atravessando a árvore - InOrder: ";
    traverseInOrder(root);
    cout << endl;

    cout << "Atravessando a árvore - PostOrder: ";
    traversePostOrder(root);
    cout << endl;

    string resultado ;

    resultado = (nullptr == searchNode(nullptr, 42)) ? "OK" : "Deu Ruim";
    cout << "Busca nullptr: " << resultado << endl;

    resultado = (root == searchNode(root, 42)) ? "OK" : "Deu Ruim";
    cout << "Busca 42: " << resultado << endl;

    resultado = (root->ptrLeft == searchNode(root, 7)) ? "OK" : "Deu Ruim";
    cout << "Busca 7: " << resultado << endl;

    resultado = (root->ptrLeft->ptrLeft == searchNode(root, 1)) ? "OK" : "Deu Ruim";
    cout << "Busca 1: " << resultado << endl;


}

