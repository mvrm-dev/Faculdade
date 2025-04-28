/** Programa: Navegação Canvas.
 *  
 *  Objetivo: Permitir que o usuário navegue com o cursor, dentro de um espaço pré-definido.  
 *  
 *  Finalidade: Dedicado à aplicação didática de conceitos da disciplina Estrutura de Dados:
 *   - Vetor;
 *   - Matriz;
 *   - Constante;
 *   - Enumerador;
 *   - Chamadas de sistema;
 *   - e, simples demostração de Interação Humano-Computador.
 * 
 *  Autor: Wellington Eufrasio Camargo.
 *  Última atualização: 28/08/2024.
 */

#include<stdio.h>
#include<stdlib.h> // system 
#include<conio.h>  // getch & kbhit

const int IDENTIFICACAO_TECLA_ESPECIAL = 224;
const int altura = 10;
const int largura = 20;
int posicao[2];
enum Comandos {ESCAPE = 27, SETA_ESQUERDA = 75, SETA_DIREITA = 77, SETA_ACIMA = 72, SETA_ABAIXO = 80};

void inicializar(char Canvas[altura][largura])
{
    int a, l;
    for (a=0; a<altura; a++)
    {
        for (l=0; l<largura; l++)
        {
            if (a==0 && l==0)
                Canvas[a][l] = '#';
            else
                Canvas[a][l] = '.';
        }
    }
}

void imprimir(char Canvas[altura][largura])
{
    int a, l;
    // Limpar a tela
    system("cls");
    for (a=0; a<altura; a++)
    {
        if (a==0)
        {
            printf("\n+");
            for (int i=0; i<largura; i++)
                printf("---");
            printf("+");
        }
        for (l=0; l<largura; l++)
        {
            if (l == 0) 
                printf("\n|");
            printf(" %c ", Canvas[a][l]);
            if (l == largura-1) 
                printf("|");
        }
    }
    printf("\n+");
    for (int i=0; i<largura; i++)
        printf("---");
    printf("+\n");
    printf("\n > Utiize as setas do teclado para navegar! \n\tPressione ESC para sair.");

}

void mover_para_direita(char Canvas[altura][largura])
{
    if (posicao[1] < largura-1)
    {
        Canvas[posicao[0]][posicao[1]] = '.';
        posicao[1]++; 
        Canvas[posicao[0]][posicao[1]] = '#';
    }
}

void mover_para_esquerda(char Canvas[altura][largura])
{
    if (posicao[1] > 0)
    {
        Canvas[posicao[0]][posicao[1]] = '.';
        posicao[1]--; 
        Canvas[posicao[0]][posicao[1]] = '#';
    }
}

void mover_para_cima(char Canvas[altura][largura])
{
    if (posicao[0] > 0)
    {
        Canvas[posicao[0]][posicao[1]] = '.';
        posicao[0]--; 
        Canvas[posicao[0]][posicao[1]] = '#';
    }
}

void mover_para_baixo(char Canvas[altura][largura])
{
    if (posicao[0] < altura-1)
    {
        Canvas[posicao[0]][posicao[1]] = '.';
        posicao[0]++; 
        Canvas[posicao[0]][posicao[1]] = '#';
    }
}

int main(int argc, char* argv[])
{
    char Canvas[altura][largura];
    inicializar(Canvas);

    int tecla, tecla_especial;

    while (tecla != ESCAPE)
    {
        // Limpa a tela e imprime a Matriz Canvas.
        imprimir(Canvas);

        // Ficar aguardando até uma tecla ser pressionada
        while ( ! kbhit() ) ;

        // Ler código da tecla pressionada
        tecla = getch();

        // Se tecla especial, pegar o próximo código para identificar a tecla pressionada
        if (tecla == IDENTIFICACAO_TECLA_ESPECIAL)
            tecla = getch();
        
        // Processar tecla pressionada
        switch (tecla)
        {
        case SETA_ESQUERDA:
            mover_para_esquerda(Canvas);
            break;
        case SETA_DIREITA:
            mover_para_direita(Canvas);
            break;
         case SETA_ACIMA:
            mover_para_cima(Canvas);
            break;
         case SETA_ABAIXO:
            mover_para_baixo(Canvas);
            break;
         case ESCAPE:
            printf("\n\nVoce saiu! Fim da execucao do programa.\n\n\n");
            break;
       
        default:
            printf("\nComando invalido! [tecla = %d]\n", tecla);
            system("pause");
            break;
        }
    }

    return 0;

}
