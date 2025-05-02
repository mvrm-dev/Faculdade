

#include <iostream>

int main()
{
    float M, Km;

    printf("digite um valor em M/s para ser convertida em Km/s: ");
    scanf("%f",&M); 

     Km = M * 3.6;

    printf("Km por hora: %f",Km);

    return 0;
}



/*
EX 12

#include <iostream>

int main()
{
    float Mi, Km;

    printf("digite um valor em Milhas para ser convertida em Quilometros: ");
    scanf("%f",&Mi); 

     Km = 1.61 * Mi;
    printf("Km: %f",Km);

    return 0;
}
*/

/*
EX 13

#include <iostream>

int main()
{
    float M, Km;

    printf("digite um valor em Quilometros para ser convertida em Milhas: ");
    scanf("%f",&Km); 

     M = Km / 1.61;
    printf("Milhas: %f",M);

    return 0;
}
*/

/*
EX 14

#include <iostream>
#include <math.h>

int main()
{
    float G, R;

    printf("digite um valor em Radianos para ser convertida em Graus: ");
    scanf("%f",&R); 

    R = G*M_PI/180;
    printf("Graus: %f",G);

    return 0;
}
*/

/*
EX 15

#include <iostream>
#include <math.h>

int main()
{
    float G, R;

    printf("digite um valor em Radianos para ser convertida em Graus: ");
    scanf("%f",&R); 

    G = R * 180/M_PI;
    printf("Graus: %f",G);

    return 0;
}
*/