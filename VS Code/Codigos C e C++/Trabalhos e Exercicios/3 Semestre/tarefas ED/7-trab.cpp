#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

struct Node{
    int numero;
    Node* prox_node;

};

Node* criar_lista(){
    return nullptr;
}

// função para inserção de elementos nos nós
void inserir_elemento(Node*& head, int num_a_inserir){
    Node* novo_elemento =  (Node*) malloc(sizeof(Node));

    novo_elemento->numero = num_a_inserir;
    novo_elemento->prox_node = head;

    if (head == nullptr || head->numero >= num_a_inserir) {
        novo_elemento->prox_node = head;
        head = novo_elemento;
        return;
    }

    //encontra a posição para o novo nó
    Node* nodo_atual = head;
    while (nodo_atual->prox_node != nullptr && nodo_atual->prox_node->numero < num_a_inserir) {
        nodo_atual = nodo_atual->prox_node;
    }

    //insere um novo nó
    novo_elemento->prox_node = nodo_atual->prox_node;
    nodo_atual->prox_node = novo_elemento;
}   

//função de pesquisa
bool pesquisar_elemento(Node* head, int num_a_verificar){
    Node* nodo_atual = head;

    while (nodo_atual != nullptr){
        if(nodo_atual->numero == num_a_verificar){
            return true;
        }
        nodo_atual = nodo_atual->prox_node;
    }  

    return false;
}

//função para remover um determinado elemento da lista (se existir)
void remover_elemento(Node* head, int valor_a_remover){
    Node* nodo_atual = head;
    Node* nodo_anterior = nullptr;

    if( nodo_atual != nullptr && nodo_atual->numero == valor_a_remover){
        head = head->prox_node;
        free(head);
    }

    while (nodo_atual != nullptr && nodo_atual->numero != valor_a_remover){
        nodo_anterior = nodo_atual;
        nodo_atual = nodo_atual->prox_node;
    }

    if(nodo_atual == nullptr){
        return;
    }

    nodo_anterior->prox_node = nodo_atual->prox_node;
    free(nodo_atual);
}   

//função para destruir a lista
void deleta_lista(Node* head){
    Node* nodo_atual = head;

    while (nodo_atual != nullptr){
        Node* temp = nodo_atual->prox_node;
        free(nodo_atual);
        nodo_atual = temp;
    }
}

//função para verificar se a lista está vazia ou não
bool lista_vazia(Node* head){
    return head == nullptr;
}

// função para imprimir a lista
void imprimir_lista(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->numero << " ";
        current = current->prox_node;
    }
    std::cout << std::endl;
}

int main(){
    Node* lista = criar_lista();

    srand(static_cast<unsigned>(time(0))); // Inicializa o gerador de números aleatórios
   
    for (int i = 0; i < 10; ++i) {
        
        int numero = rand() % (100 - 10); // gera números aleatórios entre 10 e 99
        
        inserir_elemento(lista, numero);// insere os numeros gerados aleatóriamente nos nodos
    }

    imprimir_lista(lista);  // imprime a lista

    pesquisar_elemento(lista, 25);// pesquisa o elemento 25 elemento na lista e retorna true/false
    
    remover_elemento(lista, 25);// tenta remover o elemento 25 elemento da lista. remove elemento se existir, se não existir o programa sai da função

    lista_vazia(lista);// verifica se a lista está vazia. retorna true/false

    deleta_lista(lista);// destrói a lista
    
    return 0;
}