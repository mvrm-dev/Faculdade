#include <iostream>
main () {
float j1, j2, j3, premio, apostatotal, chuchu, chuchu2, chuchu3, valor1, valor2, valor3; 

printf ("Digite o valor do premio: "); 
scanf ("%f", &premio);
printf ("Digite os valores apostados por cada jogador:"); 
scanf ("%f %f %f", &j1, &j2, &j3);
 
apostatotal = j1 + j2 + j3;

chuchu = apostatotal / j1;
chuchu2 = apostatotal / j2;
chuchu3 = apostatotal / j3;

valor1 = premio / chuchu;
valor2 = premio / chuchu2;
valor3 = premio / chuchu3;


printf("parte do jogador a: %f\nParte do jogador B: %f\nParte do jogador C: %f", valor1,valor2,valor3);

system("pause");

}






