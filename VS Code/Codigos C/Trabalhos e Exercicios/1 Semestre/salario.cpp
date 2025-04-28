#include <iostream>

main () {
    float salario1;
    printf("salario = ");
    scanf("%f",&salario1);
    
    if(salario1 <= 1320.0){
    float contaAliq1 = salario1 * 0.075;
    float contaAliq2 = salario1 - contaAliq1;
    
    printf("caiu 0.75: %f\n",contaAliq1);
    printf("conta aliq 0.75: %f\n",contaAliq2);
    }

    else if (salario1 > 1320.0 && salario1 < 2571.29)
    {   
        float contaAliq1 = salario1 *0.09;
        float contaAliq2 = salario1 - contaAliq1;
        printf("caiu 0.9: %f\n",contaAliq1);
        printf("conta aliq 0.9: %f\n",contaAliq2);
    }

    else if (salario1 > 2571.29 && salario1 < 3856.64)
    {   
        float contaAliq1 = salario1 *0.12;
        float contaAliq2 = salario1 - contaAliq1;
        printf("caiu 1.2: %f\n",contaAliq1);
        printf("conta aliq 1.2: %f\n",contaAliq2);
    }

     else if (salario1 > 3856.64 && salario1 < 7507.49)
    {   
        float contaAliq1 = salario1 *0.14;
        float contaAliq2 = salario1 - contaAliq1;
        printf("caiu 1.4: %f\n",contaAliq1);
        printf("conta aliq 1.4: %f\n",contaAliq2);
    }

    else{
        float conta = salario1 - 1051.05;
        printf("caiu else: %f",conta);
    }
    
    

}