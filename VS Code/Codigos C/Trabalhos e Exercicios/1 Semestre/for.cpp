#include <iostream>

// dados 5 numeros mostre o maior e o menor número digitado

int main(int argc, char const *argv[])
{
    int x, numeros, maior, menor;

    for(x = 1; x <=5; x++)
    {
        printf("digite um numero: ");
        scanf("%d",&numeros);
        if(x == 1){
            menor = numeros;
            maior = numeros;
        }
        else if (numeros >= maior) maior = numeros;
        else if (numeros <= menor) menor = numeros;

    }
    printf("maior: %d\nmenor: %d",maior, menor);

    return 0;
}
