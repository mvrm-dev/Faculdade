#include <stdio.h>

int main(int argc, char const *argv[])
{
    float x,y,soma,subtracao,divisao,multiplicacao;
    scanf("%f %f",&x,&y);
    
    if(y>0){
    soma = x+y;
    subtracao = x-y;
    divisao = x/y;
    multiplicacao = x*y;

    printf("soma = %.2f\nsubtração = %.2f\nmultiplicação = %.2f\ndivisão = %.2f\n", soma,subtracao,multiplicacao,divisao);
    }
    else printf("divisão por 0");

    return 0;
}
