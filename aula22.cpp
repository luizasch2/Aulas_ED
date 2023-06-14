#include <iostream>

// Insert e delete em uma árvore - aula 22 e 23

using namespace std;

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
 
//recebe uma árvore e retorna um ponteiro para árvore
Node* insert(Node* node, int iData)
{
    if (node == nullptr) return newNode(iData);

    // se o valor a ser inserido for menor que o nó ele fica à esquerda
    if (iData < node->iPayload)
    {
        node->ptrLeft = insert(node->ptrLeft, iData);
    }
    else
    {
        node->ptrRight = insert(node->ptrRight, iData);
    }

    return node;
}

// vai sempre a esquerda a fim de pegar o menor elemento
Node* lesserLeaf (Node* node)
{
    Node* ptrCurrent = node;
    
    while (ptrCurrent && ptrCurrent->ptrLeft != nullptr)
    {
        ptrCurrent = ptrCurrent->ptrLeft;
    }

    return ptrCurrent;
}

Node* deleteNode(Node* node, int iData)
{
    if (node == nullptr) return node;

    // Temos que encontrar qual a subárvore que o nó que quero deletar esta
    
    // se o nó que tenho que remover esta a esquerda
    if (iData < node->iPayload)
    {
        node->ptrLeft = deleteNode(node->ptrLeft, iData);
    }

    // se o dado for maior 
    else if (iData > node->iPayload)
    {
        node->ptrRight = deleteNode(node->ptrRight, iData);
    }

    // Agora vem o código de remoção de fato, estou agora com o cara que quero remover
    else
    {
        Node* ptrTemp = nullptr;

        // Caso fácil: elemento com no máximo um filho (sem ou 1 filho) -> direcionao delet para sub-árvore correta
        if (node->ptrLeft == nullptr)
        {
            ptrTemp = node->ptrRight;
            free(node);

            return ptrTemp;
        }

        else if(node->ptrRight == nullptr)
        {
            ptrTemp = node->ptrRight;
            free(node);

            return ptrTemp;
        }

        // Caso difícil: elemento com dois filhos -> menor elemento maior que o nó que quero deletar é o melhor para substituir
        ptrTemp = lesserLeaf(node->ptrRight);

        // fica para casa trocar os nós, aqui vamos só trocar os dados
        node->iPayload = ptrTemp->iPayload;

        node->ptrRight = deleteNode(node->ptrRight, ptrTemp->iPayload);

    }

    return node;
}

int main()
{
    struct Node* root = newNode(42);

    // Árvore de busca binária
    root->ptrLeft = newNode(7);
    root->ptrRight = newNode(666);
    root->ptrRight->ptrLeft = newNode(1);
    root->ptrRight->ptrRight = newNode(13); 

    
    // Vazamento de memória! Cuidado! Não faça isso
    root = nullptr;

    root = insert(root, 42);
    root = insert(root, 7);
    root = insert(root, 666);
    root = insert(root, 1);
    root = insert(root, 13);

    cout << "Atravessando a árvore - PreOrder: ";
    traversePreOrder(root);
    cout << endl;

    deleteNode(root, 42);
    cout << "Atravessando a árvore com elemento deletado- PreOrder: ";
    cout << "cheguei" << endl;
    traversePreOrder(root);
    cout << endl;

}

