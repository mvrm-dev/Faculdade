#include <stdio.h>

int verifica_cilindro(float,float,float,float);

int main(){
    float d1,h1,d2,h2;

    scanf("%f %f %f %f",&d1,&h1,&d2,&h2);

    verifica_cilindro(d1,h1,d2,h2);

    return 0;
}

int verifica_cilindro(float d1, float h1, float d2, float h2){
    if(d1 == d2){
        if(h1 == h2) printf("0");
        else printf("1");
    }
    else printf("1");
    
    return 0;
}