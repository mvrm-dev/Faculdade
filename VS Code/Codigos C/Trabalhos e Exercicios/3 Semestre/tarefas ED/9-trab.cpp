#include <iostream>
#include <stdlib.h>
#include "7-trab.cpp"

typedef struct fila Fila;
Fila* fila_cria ();
void fila_adiciona (Fila* PtDF, int valor);
int fila_vazia (Fila* PtDF);
void fila_imprime (Fila* f);
int fila_visualiza (Fila* PtDF);
int fila_remove (Fila* PtDF);
void fila_libera (Fila* PtDF);

struct fila {
    Node* prim;
    Node* ult;
};
typedef struct fila Fila;

Fila* fila_cria () {
    Fila* PtDF = (Fila*) malloc(sizeof(Fila));
    PtDF->prim = NULL;
    PtDF->ult = NULL;
}


void fila_adiciona (Fila* f, int i) {
    /* Constru¸c~ao do elemento */
    Node* novo = (Node*) malloc(sizeof(Node));
    novo->numero = i;
    novo->prox_node = NULL;

    /* Enfileiramento */
    if (f->ult == NULL) {
        f->ult = novo;
        f->prim = novo;
    } 
    else {
        f->ult->prox_node = novo;
        f->ult = novo;
    }
}

int fila_vazia (Fila* f) {
return (f->ult == NULL);
}



void fila_imprime (Fila* f) {
    if (fila_vazia(f)) {
        printf("Fila vazia!");
        return;
    }

    Node* p;
    printf("\n");
    for (p = f->prim; p != NULL; p = p->prox_node)
    printf("%d ", p->numero);

}


void fila_libera_simplificado (Fila* f) {
    while (!fila_vazia(f))
        fila_remove(f);
    free(f);
}


/* Gera valor Inteiro dentro do intervalo [min, max]. Necessita <time.h> */
int random_int(int min, int max) {
    return min + (rand() % max);
}


int main() {

    const int MIN = 10, MAX = 99;
    srand(time(NULL)); /* inicializa fun¸c~ao rand^omica */
    printf("\nFILA:\n");
    Fila* f = fila_cria(); /* inicializa a estrutura fila */

    fila_imprime(f); /* imprimir´a: Fila vazia! */

    fila_adiciona(f, random_int(MIN, MAX)); /* insere elemento aleat´orio A */
    fila_adiciona(f, random_int(MIN, MAX)); /* insere elemento aleat´orio B */
    fila_adiciona(f, random_int(MIN, MAX)); /* insere elemento aleat´orio C */
    fila_adiciona(f, random_int(MIN, MAX)); /* insere elemento aleat´orio D */
    fila_adiciona(f, random_int(MIN, MAX)); /* insere elemento aleat´orio E */

    fila_imprime(f); /* imprimir´a: A B C D E */

    printf("\nO prox_nodeimo da fila eh: %d", fila_visualiza(f)); /* imprimir´a: A */
    printf("\nChamando o prox_nodeimo da fila: %d", fila_remove(f)); /* dequeue A */
    printf("\nChamando o prox_nodeimo da fila: %d", fila_remove(f)); /* dequeue B */
    printf("\nChamando o prox_nodeimo da fila: %d", fila_remove(f)); /* dequeue C */
    printf("\nFILA ATUALIZADA:");

    fila_imprime(f); /* imprimir´a: D E */

    fila_libera_simplificado(f); /* destr´oi a estrutura fila */
}