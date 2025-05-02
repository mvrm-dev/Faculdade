#include <stdio.h>

int main(){
int entrada;
float salario, imposto_renda;
while (true)
{   
    printf("digite uma entrada\n");
    scanf("%d",&entrada);

    if (entrada != 0){
        printf("Digite o salário do funcionário\n");
        scanf("%f",&salario);

        if(salario <= 1900.00 )printf("Não paga imposto");

        else if (salario > 1900.00 && salario <= 3700.00){
            imposto_renda = salario * 0.15;
            printf("Calculando imposto de 15%\n");
            printf("Seu imposto de renda é : %.2f", imposto_renda);
        }
        else if (salario > 3700.00 && salario <= 4664.38){
            imposto_renda = salario * 0.225;
            printf("Calculando imposto de 22.5%\n");
            printf("Seu imposto de renda é : %.2f", imposto_renda);
        }
        else{
            imposto_renda = salario * 0.27;
            printf("Calculando imposto de 27%\n");
            printf("Seu imposto de renda é : %.2f", imposto_renda);
    }
    }
    else{return false;}
    }
}
