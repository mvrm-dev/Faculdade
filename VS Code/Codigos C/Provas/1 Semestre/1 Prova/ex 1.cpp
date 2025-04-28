#include <iostream>
#include <math.h>
main(){
int minutos, horas, mintotal, minhrs;
float valor;
printf("Digite as horas utilizadas no mes:");
scanf("%d", &horas);
printf ("Digite as minutos utilizadas no mes:");
scanf ("%d", &minutos);
   minhrs = horas*60;
   mintotal = minutos+minhrs;
   if (mintotal<=200){
   	valor= mintotal*0.20;
   }
    else  if (mintotal<=400){
   	valor= mintotal*0.18;
   }
   else {
    valor= mintotal*0.15;
   }
   printf ("Valor da conta: %.2f\n", valor);
   system ("pause");
}
