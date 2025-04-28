#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <vector>

enum Comandos {ESCAPE = 27, SETA_ACIMA = 72, SETA_ABAIXO = 80}; // NOSSO código :)

const int ID_TECLA_ESPECIAL = 224;

// void imprime_matriz(const std::vector< std::vector<std::string> > &vetor){
//     for(int i = 0; i < 3; i++){

//         for(int j = 0; j < 3; j++){
//             std::cout << vetor[i][j];
//         }
//     }
// }

void inicializa_matriz(std::vector<std::vector<std::string> > &vetor){

    for(int i = 0; i < 3; i++){   
        vetor.reserve(3);
        for(int j = 0; j < 3; j++){
            vetor.emplace_back("teste");
        }
    }
}

void mover_para_cima();

void mover_para_baixo();

int main(void){

    std::vector< std::vector<std::string> > vetor;

    inicializa_matriz(vetor);

    //imprime_matriz(vetor);

    return 0;
}