#include <stdio.h>

int xadrez(int, int);

int main() {
    int N,G;
    scanf("%d",&N);
    scanf("%d",&G);
    xadrez(N,G);
    return 0;
}

int xadrez(int N, int G){
    int altura=N*8;
    int largura=N*8;
    printf("P2\n%d %d\n%d\n",altura+2,largura+2,G);

    for(int i=0;i<largura+2;i++){
        printf("0\t");
        if(i==largura+1){
            printf("\n");
        }
    }
    for(int x=0;x<altura;x++){
        for(int y=0;y<largura;y++){
            if(y==0){
                printf("0 \t");
            }
            if((x/N+y/N)%2==0){
                printf("%d\t",G);
            }else{
                printf("0\t");
            }
            if(y==largura-1){
                printf("0\t");
            }

        }
        printf("\n");
    }
    for(int i=0;i<largura+2;i++){
        printf("0\t");
    }

}