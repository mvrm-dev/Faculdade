#include <iostream>
#include <math.h>
main (){
	int numero, unidade, dezena, centena;
	printf("Digite um numero inteiro com tres digito (100 a 999):");
	scanf("%d", &numero);
	centena= numero/100;
	dezena=numero%100/10;
	unidade=numero%100%10;

	printf("%d",unidade);

	if (centena==0){
		centena=5;
	}
	else if (centena%2!=0){
	centena=2;
}
    else {
    	centena=3;
	}
		if (dezena==0){
		dezena=5;
	}
	else if (dezena%2!=0){
	dezena=2;
}
    else {
    	dezena=3;
	}

		if (unidade==0){
		unidade=5;
	}
	else if (unidade%2!=0){
	unidade=2;
}
    else {
    	unidade=3;
	}
	printf("Numero novo: %d%d%d \n", unidade, dezena, centena);
	system ("pause");
}
