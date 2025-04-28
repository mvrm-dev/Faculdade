#include <iostream>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "PORTUGUESE");

    float a,b,c;
    
    printf("digite três valores: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a == b && a == c) {

        printf("triângulo equilátero");
    }
    
    else if (a == b || a == c || b == c)
    {
        printf("triângulo isóceles");
    }

   
    else {
        printf("triângulo escaleno");
    }

    return 0;
}

