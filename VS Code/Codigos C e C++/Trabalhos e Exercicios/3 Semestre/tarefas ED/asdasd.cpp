#include <iostream>
#include <cstdlib> // Para rand() e srand()
#include <ctime>   // Para time()
#include <vector>  // Para criar uma lista de números aleatórios

using namespace std;

// Estrutura para um nó da lista
struct Node {
    int data;
    Node* next;
};

// Função para criar uma lista vazia
Node* createList() {
    return nullptr;
}

// Função para inserir um novo elemento na lista de forma ordenada
void insertElement(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    // Caso especial: lista vazia ou novo nó é o menor
    if (head == nullptr || head->data >= value) {
        newNode->next = head;
        head = newNode;
        return;
    }

    // Encontrar a posição correta para o novo nó
    Node* current = head;
    while (current->next != nullptr && current->next->data < value) {
        current = current->next;
    }

    // Inserir o novo nó
    newNode->next = current->next;
    current->next = newNode;
}

// Função para pesquisar um elemento na lista
bool searchElement(Node* head, int value) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == value) {
            return true;
        }
        current = current->next;
    }
    return false;
}

// Função para remover um elemento da lista
void removeElement(Node*& head, int value) {
    Node* current = head;
    Node* previous = nullptr;

    // Caso especial para remover o primeiro nó
    if (current != nullptr && current->data == value) {
        head = current->next;
        delete current;
        return;
    }

    // Procurar o nó a ser removido
    while (current != nullptr && current->data != value) {
        previous = current;
        current = current->next;
    }

    // Se o elemento não foi encontrado
    if (current == nullptr) {
        return;
    }

    // Remover o nó
    previous->next = current->next;
    delete current;
}

// Função para verificar se a lista está vazia
bool isEmpty(Node* head) {
    return head == nullptr;
}

// Função para imprimir a lista
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Função para destruir a lista
void destroyList(Node*& head) {
    Node* current = head;
    Node* nextNode;
    while (current != nullptr) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }
    head = nullptr;
}

// Função para gerar números aleatórios e manipular a lista
void manipulateList() {
    Node* list = createList();

    // Gerar e inserir números aleatórios
    srand(static_cast<unsigned>(time(0))); // Inicializa o gerador de números aleatórios
    vector<int> randomNumbers;

    for (int i = 0; i < 10; ++i) {
        int num = 10 + rand() % (100 - 10); // Números aleatórios entre 10 e 99
        randomNumbers.push_back(num);
        insertElement(list, num);
    }

    // Imprimir lista após inserção
    cout << "Lista após inserção de números aleatórios: ";
    printList(list);

    // Pesquisar elementos
    cout << "Elemento 50 encontrado? " << (searchElement(list, 50) ? "Sim" : "Não") << endl;

    // Remover um elemento
    removeElement(list, 50);
    cout << "Lista após tentativa de remoção do número 50: ";
    printList(list);

    // Verificar se a lista está vazia
    cout << "Lista está vazia? " << (isEmpty(list) ? "Sim" : "Não") << endl;

    // Destruir a lista
    destroyList(list);
    cout << "Lista após destruição: ";
    printList(list);
}

int main() {
    manipulateList();
    return 0;
}
