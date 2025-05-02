#include <iostream>

int main(int argc, char const *argv[])
{
    int x;
    float numero, soma;

    soma = 0;
    x =1;

    while (x<=5)
    {
        printf("digite um numero [%d] : ",x);
        scanf("%f", &numero);
        soma = numero + soma;
        x+=1;

    }
    printf("soma vale : %.2f \n",soma);

    return 0;
}