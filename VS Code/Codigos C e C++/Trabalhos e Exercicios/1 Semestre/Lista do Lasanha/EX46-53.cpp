// EX 46

// #include<iostream>

// int main() {
//     int numero, numeroInvertido = 0;

//     printf("Digite um número inteiro de três dígitos (de 100 a 999): ");
//     scanf("%d",&numero);

//     if (numero >= 100 && numero <= 999) {
      
//         while (numero != 0) {
//             int digito = numero % 10;
//             numeroInvertido = numeroInvertido * 10 + digito;
//             numero /= 10;
//         }
//         printf("O número invertido é: %d",numeroInvertido);
//     } 
//     else {
//         printf("Número inválido. Por favor, digite um número de três dígitos.");
    
//     }
//     return 0;
// }


//EX 46 EZMODE

// #include<iostream>

// int main(int argc, char const *argv[])
// {
//     int numero, u, d, c;

//     printf("fala o numero: ");
//     scanf("%d",&numero);

//      c = numero /100;
//      d = numero % 100 /10;
//      u = numero %100 % 10; 
    
//     int conta = u*100+d*10+c;
//     printf("jeito mais claro %d\n",c);
//     printf("jeito mais claro %d\n",d);
//     printf("jeito mais claro %d\n",u);
    
//     printf("preguiça %d",u*100+d*10+c);

//     return 0;
// }


//EX 47

// #include <iostream>

// int main(int argc, char const *argv[])
// {
//     int numero;
//     printf ("digite um numero de 4 digitos: ");
//     scanf("%d", &numero);

//     int contaUnidade = numero / 1000;
//     int contaDezena = numero % 1000 /100;
//     int contaCentena = numero % 1000 % 100 /10;
//     int contaMilhar = numero % 1000 % 100 % 10;
//     printf("%d\n",contaUnidade);
//     printf("%d\n",contaDezena);
//     printf("%d\n",contaCentena);
//     printf("%d\n",contaMilhar);

//     return 0;
// }

//EX 48

// #include<iostream>

// int main(int argc, char const *argv[])
// {
//     int segundos;
//     printf("digite um valor em segundos para ser convertido: ");
//     scanf("%d",&segundos);

//     int contaHora = segundos /3600;
//     int contaMin = segundos / 60;
//     int contaSeg = segundos % 60;

//     printf("%d:%d:%d",contaHora, contaMin,contaSeg);

//     return 0;
// }


// #include<iostream>

// int main(int argc, char const *argv[])
// {   
//     int horas, minutos, segundos;

//     //pede pra digitar hora, min, seg
//     printf("digite o valor em horas do experimento: ");
//     scanf("%d %d %d",&horas, &minutos, &segundos);

//     int segundos1;

//     //pede pra digitar os segundos a serem convertidos pra hora, min, seg
//     printf("digite um valor em segundos para ser convertido: ");
//     scanf("%d",&segundos1);

//     //converte os segundos em hora, min, seg
//     int contaHora = segundos1 /3600;
//     int contaMin = segundos1 / 60 %60;
//     int contaSeg = segundos1 % 60;

//     //soma a hora inicial (int horas , minutos, segundos) com os segundos convertidos ( em hora, min, seg) acima ^
//     int contaHora2 = contaHora + horas;
//     int contaMin2 = contaMin + minutos;
//     int contaSeg2 = contaSeg + segundos;

//     //da print no resultado
//     printf("%d:%d:%d",contaHora2, contaMin2,contaSeg2);


//     return 0;
// }

