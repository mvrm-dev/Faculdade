/*
EX 26

#include <iostream>

int main()
{
    float H, M;

    printf("digite um valor em Metros Quadrados para ser convertida em Hectares: ");
    scanf("%f",&M); 

    H = M * 0.0001;
    printf("Hectares: %f",H);

    return 0;
}
*/

/*
EX 27

#include <iostream>

int main()
{
    float H, M;

    printf("digite um valor em Hectares para ser convertida em Metros Quadrados: ");
    scanf("%f",&H);

    M = H * 10000;
    printf("Metros Quadrados: %f",M);

    return 0;
}
*/

/*
EX 28

#include <iostream>
#include <math.h>
int main()
{
    float a,b,c,r;

    printf("digite tres valores: ");
    scanf("%f %f %f",&a,&b,&c);

    r = pow(a,2) + pow(b,2) + pow(c,2);

    printf("Soma dos quadrados e: %f",r);

    return 0;
}
*/

/*
EX 29

#include <iostream>
#include <math.h>
int main()
{
    float a,b,c,d,r;

    printf("digite quatro valores para ser feito uma media aritmetica : ");
    scanf("%f %f %f %f",&a,&b,&c,&d);

    r = (a+b+c+d)/4;

    printf("Soma dos quadrados e: %f",r);

    return 0;
}
*/

/*
EX 30

#include <iostream>
#include <math.h>
int main()
{
    float a,b,r;
    
    //b = 5.0;
    
    //printf("digite um valor em reais para converter R$ EM $ : ");
    //scanf("%f %f",&a);

    printf("digite um valor em reais e a cotacao do dolar para converter R$ EM $ : ");
    scanf("%f %f",&a,&b);

    r = a / b;

    printf("Soma dos quadrados e: %f",r);

    return 0;
}
*/


