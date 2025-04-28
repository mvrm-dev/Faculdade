#include <stdio.h>

float req(int, float*);


int main(){
    int tamanho_v;
    scanf("%d",&tamanho_v);
    
    float res[tamanho_v], r;

    for(int x = 0; x < tamanho_v; x++){
        scanf("%f",&res[x]);
    }
    r = req(tamanho_v, res);

    printf("%.3f",r);
    
    return 0;
}


float req(int n, float* res){
    float conta;

    for (int x = 0; x <= (n-1); x++){
        conta += 1 / res[x];
    }
    conta = 1/conta;

    return conta;
}