//EX 36
//
// #include <iostream>
// #include <math.h>

// int main(int argc, char const *argv[])
// {
//     const float pi = 3.141592;
//     float raio;
//     float altura;
//     float res;

//     printf("digite o raio de um cilindro");
//     scanf("%f",&raio);

    
//     printf("digite a altura de um cilindro");
//     scanf("%f",&altura);

//     res = pi * pow(raio,2) * altura;

//     printf("o volume do cilindro e: %f",res);
    
    
//     return 0;
// }

// EX 37

// #include <iostream>

// int main(int argc, char const *argv[])
// {
//     const float perc = 0.12;
//     float prod;
//     float conta;
//     float res;

//     printf("digite o valor do item comprado: ");
//     scanf("%f", &prod);

//     conta = prod * perc;

//     res = prod - conta;

//     printf("resultado conta = %f\n",conta);
//     printf("resultado res = %f\n",res);

//     return 0;
// }


// EX 38

// #include<iostream>

// int main(int argc, char const *argv[])
// {
//     float salario;
//     const float aumento = 0.25;

//     printf("digite o valor do salario do funcionario: ");
//     scanf("%f",&salario);

//     float conAumento = salario * aumento;
//     float resAumento = salario + conAumento;

//     printf("o novo salario do funcionario e %f",resAumento);

//     return 0;
// }

// EX 39

#include <iostream>

int main(int argc, char const *argv[])
{
    
    const float importancia = 780000;
    const float ganhador = 0.46;
    const float segundo = 0.32;
    
    float conta1 = importancia * ganhador;
    float conta2 = importancia * segundo;
    float conta3 = (importancia - conta1) - conta2;

    printf("ganhador = %f\n",conta1);
    printf("segundo = %f\n",conta2);
    printf("terceiro = %f\n",conta3);

    return 0;
}


// EX 40

// #include <iostream>

// int main(int argc, char const *argv[])
// {
//     const float salario = 30;
//     const float bonus = 0.1;
//     float dias;

//     printf("digite o numero de dias trabalhados: ");
//     scanf("%f",&dias);

//     float conta1 = dias * salario;
//     float conta2 = (conta1 * bonus) + conta1;

//     printf("seu salario vai ser = %f",conta2);


//     return 0;
// }

