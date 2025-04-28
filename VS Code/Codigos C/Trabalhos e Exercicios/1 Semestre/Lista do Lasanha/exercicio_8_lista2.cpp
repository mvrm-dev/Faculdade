#include <iostream>
#include <math.h>
// ex 8 (lista2)
main (){

    int nota1, nota2, media;

    printf ("Digite as duas notas: ");
    scanf ("%d %d", &nota1, &nota2);

    media = (nota1 + nota2)/2;

    if (media > 0 && media <= 10) {

    printf ("MEDIA: %d \n ", media);
}
    else {
	    printf (" Valor nao valido! \n ");
}
	return 0;
	

}