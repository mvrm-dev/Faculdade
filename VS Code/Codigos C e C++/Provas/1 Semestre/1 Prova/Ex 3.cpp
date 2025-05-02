#include <iostream>
#include <math.h>
main (){
	float altura, raio, volume;
	printf("Digite a altura do cilindro: ");
	scanf("%f", &altura);
	printf("Digite a raio do cilindro: ");
		scanf("%f", &raio);
		if (altura<=0 || raio<=0){
			printf ("Valores inexistentes\n");
		}
		else {
			volume = M_PI*pow(raio,2)*altura;
			printf ("Volume: %.2f\n", volume);
		}
		system ("pause");
}
