/*
*Nombre del programa: Dolares.
*Autor: Kelin  Arboleda.
*Fecha: 24-febrero-2017.
*/
#include <stdio.h>
int main(){
    int precio_dolar,cantidad_dolar,total_dinero;
    printf ("ingrese el valor del dolar \n");
    scanf ("%d", &precio_dolar);
    printf ("ingrese la cantidad de dolares \n");
    scanf ("%d", &cantidad_dolar);
    total_dinero = precio_dolar*cantidad_dolar;
    printf ("El Total De Dinero En Dolares Es: %d \n",total_dinero);
return 0;
}
