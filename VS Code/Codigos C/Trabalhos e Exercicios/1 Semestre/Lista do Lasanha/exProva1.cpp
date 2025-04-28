#include<iostream>
int main(int argc, char const *argv[])
{
    float altura;
    printf("sua altura amigo: ");
    scanf("%f",&altura);

    int sexo;
    printf("digite seu sexo M (1) F (2): ");
    scanf("%f",&sexo);

    float peso;
    printf("digite seu peso: ");
    scanf("%f",&peso);

    if(sexo == 1){

        const float pesoIdeal = (72.7 * altura)- 58.0;
        const float diferencaPeso = peso - pesoIdeal;

        printf("Peso Ideal (MASC): %.2f", pesoIdeal);
        printf("Diferenca dos pesos: %.2f",diferencaPeso);

    }
    else if(sexo == 2){

        const float pesoIdeal = (62.1 * altura)- 44.7;
        const float diferencaPeso = peso - pesoIdeal;

        printf("Peso Ideal (MASC): %.2f", pesoIdeal);
        printf("Diferenca dos pesos: %.2f",diferencaPeso);

    }
    else{
        printf("ou é M (1) ou é F (2) amigo");
    }
    
    return 0;
}
