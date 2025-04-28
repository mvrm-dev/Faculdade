#include <stdio.h>
int soma_vetor(int **vetor){
        int res;
        for(int y = 0; y< 2; y++){
            for(int x = 0; x <= 4; x++){
                res += vetor[y][x];
            }
        }
    return res;
}

int main(){
    int resposta;
    int vetor[2][4];
        for(int x = 0; x < 2; x++){
            for(int y = 0; y < 4; y++){
            scanf("%d",&vetor[x][y]);
            }
        }
    resposta = soma_vetor(*vetor);
    printf("teste : %d",resposta);

    return 0;
}