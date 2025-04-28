#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100 // Capacidade máxima da pilha

typedef struct {
    char* elementos[MAX];
    int topo;
} Pilha;

// Inicializa a pilha
void inicializa(Pilha* pilha) {
    pilha->topo = -1;
}

// Verifica se a pilha está cheia
int pilhaCheia(Pilha* pilha) {
    return pilha->topo == MAX - 1;
}

// Verifica se a pilha está vazia
int pilhaVazia(Pilha* pilha) {
    return pilha->topo == -1;
}

// Adiciona um elemento na pilha
void Push(Pilha* pilha, const char* elemento_uf) {
    if (pilhaCheia(pilha)) {
        printf("Pilha cheia! Não é possível adicionar %s\n", elemento_uf);
        return;
    }
    pilha->topo++;
    pilha->elementos[pilha->topo] = strdup(elemento_uf); // Duplica a string
}

// Remove e retorna o elemento do topo da pilha
char* Pop(Pilha* pilha) {
    if (pilhaVazia(pilha)) {
        printf("Pilha vazia! Não é possível remover elemento.\n");
        return NULL;
    }
    char* elemento = pilha->elementos[pilha->topo];
    pilha->topo--;
    return elemento; // Retorna o elemento removido
}

// Retorna o elemento do topo da pilha sem removê-lo
char* Top(Pilha* pilha) {
    if (pilhaVazia(pilha)) {
        printf("Pilha vazia! Não há elemento no topo.\n");
        return NULL;
    }
    return pilha->elementos[pilha->topo];
}

// Libera a memória da pilha
void liberaPilha(Pilha* pilha) {
    while (!pilhaVazia(pilha)) {
        free(Pop(pilha)); // Libera a memória alocada para cada string
    }
}

int main() {
    Pilha pilha;
    inicializa(&pilha);

    Push(&pilha, "MS");
    Push(&pilha, "DF");
    Push(&pilha, "RJ");
    Push(&pilha, "PR");
    
    printf("Elemento no topo antes das operações: %s\n", Top(&pilha));

    char* elementoPop = Pop(&pilha);
    Push(&pilha, elementoPop);
    
    Push(&pilha, "SP");
    
    char* topo = Top(&pilha);
    Push(&pilha, topo);
    
    Pop(&pilha);
    Pop(&pilha);
    
    printf("O elemento no topo da pilha: %s\n", Top(&pilha));

    // Libera a memória da pilha
    liberaPilha(&pilha);

    return 0;
}
