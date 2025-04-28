#include <stdio.h>

void Hanoi(int ,char, char, char);

int main(){

    int num_disc;

    scanf("%d",&num_disc);

    Hanoi(num_disc,'A','B','C');

    return 0;
}

void Hanoi(int num_discos, char origem, char destino, char temp){

    if(num_discos == 1){
        printf("Mover disco %d do pino %c para pino %c\n", num_discos, origem, destino);
    }
    else{
        Hanoi(num_discos -1, origem, temp, destino);
        printf("Mover disco %d do pino %c para pino %c\n", num_discos, origem, destino);
        Hanoi(num_discos -1, temp, destino, origem);
    }

}