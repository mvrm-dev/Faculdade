#include <iostream>
#include <stdlib.h>
#include <time.h>

typedef struct Node {
    int numero;
    Node* prox_node;
} Node;

typedef struct fila {
    Node* prim;
    Node* ult;
} Fila;

Fila* fila_cria() {
    Fila* PtDF = (Fila*)malloc(sizeof(Fila));
    PtDF->prim = NULL;
    PtDF->ult = NULL;
    return PtDF;
}

void fila_adiciona(Fila* f, int i) {
    Node* novo = (Node*)malloc(sizeof(Node));
    novo->numero = i;
    novo->prox_node = NULL;

    if (f->ult == NULL) {
        f->ult = novo;
        f->prim = novo;
    } else {
        f->ult->prox_node = novo;
        f->ult = novo;
    }
}

int fila_vazia(Fila* f) {
    return (f->prim == NULL);
}

void fila_imprime(Fila* f) {
    if (fila_vazia(f)) {
        printf("Fila vazia!\n");
        return;
    }

    Node* p;
    printf("\n");
    for (p = f->prim; p != NULL; p = p->prox_node)
        printf("%d ", p->numero);
    printf("\n");
}

int fila_visualiza(Fila* PtDF) {
    if (fila_vazia(PtDF)) {
        return -1; // Ou algum valor que indique que a fila está vazia
    }
    return PtDF->prim->numero;
}

int fila_remove(Fila* PtDF) {
    if (fila_vazia(PtDF)) {
        return -1; // Ou algum valor que indique que a fila está vazia
    }
    Node* temp = PtDF->prim;
    int valor = temp->numero;
    PtDF->prim = PtDF->prim->prox_node;
    if (PtDF->prim == NULL) {
        PtDF->ult = NULL; // Se a fila ficar vazia, atualiza o último
    }
    free(temp);
    return valor;
}

void fila_libera(Fila* PtDF) {
    while (!fila_vazia(PtDF))
        fila_remove(PtDF);
    free(PtDF);
}

int random_int(int min, int max) {
    return min + (rand() % (max - min + 1));
}

int main() {
    const int MIN = 10, MAX = 99;
    srand(time(NULL)); /* inicializa função randômica */
    printf("\nFILA:\n");
    Fila* f = fila_cria(); /* inicializa a estrutura fila */

    fila_imprime(f); /* imprimir´a: Fila vazia! */

    fila_adiciona(f, random_int(MIN, MAX)); /* insere elemento aleatório A */
    fila_adiciona(f, random_int(MIN, MAX)); /* insere elemento aleatório B */
    fila_adiciona(f, random_int(MIN, MAX)); /* insere elemento aleatório C */
    fila_adiciona(f, random_int(MIN, MAX)); /* insere elemento aleatório D */
    fila_adiciona(f, random_int(MIN, MAX)); /* insere elemento aleatório E */

    fila_imprime(f); /* imprimir´a: A B C D E */

    printf("\nO próximo elemento da fila é: %d\n", fila_visualiza(f)); /* imprimir´a: A */
    printf("Chamando o próximo elemento da fila: %d\n", fila_remove(f)); /* dequeue A */
    printf("Chamando o próximo elemento da fila: %d\n", fila_remove(f)); /* dequeue B */
    printf("Chamando o próximo elemento da fila: %d\n", fila_remove(f)); /* dequeue C */
    printf("FILA ATUALIZADA:\n");

    fila_imprime(f); /* imprimir´a: D E */

    fila_libera(f); /* destrói a estrutura fila */
}
