/*
* Nombre del programa: Circunferencia.
* Autor: Kelin  Arboleda.
* Fecha: 24-febrero-2017.
*/
#include <stdio.h>
int main (){
    float radio,diametro,longitudc, area;
    printf (" ingrese el radio de la circunferencia \n ");
    scanf ("%f", &radio);
    area = PI * radio^2;
	diametro = 2*PI;
	longitudc = 2*PI*radio;
	printf ("circunferencia con radio: %f \n ",radio);
	escribir ("el area de la circunferencia es; %f \n ",area);
	escribir ("diametro de la circunferencia: %f \n ",diametro);
	escribir ("longitud de circunferencia: %f \n ",longitudc);
	return 0;
}
