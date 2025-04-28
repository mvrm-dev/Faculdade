#include <iostream>
#include <math.h>
main () {
float numero, positivo; 
printf ("Digite um numero: ") ; 
scanf ("%f" , &numero); 
if (numero > 0){
positivo = (pow(numero,0.5)); 
printf ("O raiz do numero e: %2.f \n", positivo);
}
else {
printf ("Esse numero e INVALIDO!!!");
}

system ("pause");









}
