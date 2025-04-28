#include <iostream>
#include <stdlib.h>
#include <conio.h>

#define ALTURA_MAX 10
#define LARGURA_MAX 15

//caso tenha algo a adicionar ficarei feliz em receber um feedback, do código inicial só removi 1 variável que n estava sendo usada (int tecla_especial) e defini um macro

// protótipo pra n dar erro de declaração
void menu();

char ponteiro = '#';
int posicao[2] = {0, 0};  // Inicializar a posição do cursor na matriz

const int ID_TECLA_ESPECIAL = 224;
enum Comandos {ESCAPE = 27, SETA_ESQUERDA = 75, SETA_DIREITA = 77, SETA_ACIMA = 72, SETA_ABAIXO = 80}; 

// Popula os endereços da matriz
void inicializa_matriz(char matriz[ALTURA_MAX][LARGURA_MAX]) {
    int a, l;
    for (a = 0; a < ALTURA_MAX; a++) {
        for (l = 0; l < LARGURA_MAX; l++) {
            if (a == 0 && l == 0)
                matriz[a][l] = ponteiro;
            else
                matriz[a][l] = '.';
        }
    }
}

void imprime_matriz(char matriz[ALTURA_MAX][LARGURA_MAX]) {
    int a, l;
    system("cls");  // Limpa a tela
    for (a = 0; a < ALTURA_MAX; a++) {
        if (a == 0) {
            std::cout << "\n+";
            for (int i = 0; i < LARGURA_MAX; i++)
                std::cout << "***";
            std::cout << "+";
        }
        for (l = 0; l < LARGURA_MAX; l++) {
            if (l == 0)
                std::cout << "\n|";
            printf(" %c ", matriz[a][l]);
            if (l == LARGURA_MAX - 1)
                std::cout << "|";
        }
    }
    std::cout << "\n+";
    for (int i = 0; i < LARGURA_MAX; i++)
        std::cout << "***";
    std::cout << "+\n";
    std::cout << "\n > Utilize as setas do teclado para navegar!\n\tPressione ESC para voltar ao menu" << std::endl;
}

// Faz a movimentação do cursor na matriz
void mover_para_cima(char matriz[ALTURA_MAX][LARGURA_MAX]) {
    if (posicao[0] > 0) {
        matriz[posicao[0]][posicao[1]] = '.';
        posicao[0]--; 
        matriz[posicao[0]][posicao[1]] = ponteiro;
    }
}

void mover_para_baixo(char matriz[ALTURA_MAX][LARGURA_MAX]) {
    if (posicao[0] < (ALTURA_MAX - 1)) {
        matriz[posicao[0]][posicao[1]] = '.';
        posicao[0]++; 
        matriz[posicao[0]][posicao[1]] = ponteiro;
    }
}

void mover_para_direita(char matriz[ALTURA_MAX][LARGURA_MAX]) {
    if (posicao[1] < (LARGURA_MAX - 1)) {
        matriz[posicao[0]][posicao[1]] = '.';
        posicao[1]++; 
        matriz[posicao[0]][posicao[1]] = ponteiro;
    }
}

void mover_para_esquerda(char matriz[ALTURA_MAX][LARGURA_MAX]) {
    if (posicao[1] > 0) {
        matriz[posicao[0]][posicao[1]] = '.';
        posicao[1]--; 
        matriz[posicao[0]][posicao[1]] = ponteiro;
    }
}

// Redefine a posição do cursor para (0, 0)
void resetar_cursor(char matriz[ALTURA_MAX][LARGURA_MAX]) {
    matriz[posicao[0]][posicao[1]] = '.';
    posicao[0] = 0;
    posicao[1] = 0;
    matriz[posicao[0]][posicao[1]] = ponteiro;
}

void canvas() {
    char matriz[ALTURA_MAX][LARGURA_MAX];
    inicializa_matriz(matriz);
    int tecla;

    // Faz a checagem de qual tecla foi lida pelo programa
    while (tecla != ESCAPE) {
        imprime_matriz(matriz);
        while (!kbhit()) ;

        tecla = getch();
        if (tecla == ID_TECLA_ESPECIAL)
            tecla = getch();

        switch (tecla) {
            case SETA_ESQUERDA:
                mover_para_esquerda(matriz);
                break;

            case SETA_DIREITA:
                mover_para_direita(matriz);
                break;

            case SETA_ACIMA:
                mover_para_cima(matriz);
                break;

            case SETA_ABAIXO:
                mover_para_baixo(matriz);
                break;

            case ESCAPE:
                // Redefine o cursor para a posição inicial ao retornar ao menu
                resetar_cursor(matriz);
                menu();
                break;

            default:
                std::cout << "\nComando invalido!" << std::endl;
                system("pause");
                break;
        }
    }
}

void menu() {
    system("cls");
    int escolha;
    std::cout << "1-Iniciar navegacao no canvas\n2-Escolher cursor\n3-Sair do programa" << std::endl;
    std::cout << "O que deseja fazer: ";
    std::cin >> escolha;

    switch (escolha) {
        case 1:
            canvas();
            break;
        case 2:
            std::cout << "\nDigite o caractere que deseja usar como cursor: ";
            std::cin >> ponteiro;
            menu();
            break;
        case 3:
            break;
        default:
            std::cout << "\nComando invalido!" << std::endl;
            system("pause");
            break;
    }
}

int main(void) {
    menu();
    return 0;
}
