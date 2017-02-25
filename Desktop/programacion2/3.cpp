/*
* Nombre del programa: Salario De Trabajador.
* Autor: Kelin  Arboleda.
* Fecha: 24-febrero-2017.
*/
#include <stdio.h>
int main (){
    int horas_diurnas, horas_nocturnas,horas_dominicales,horas_festivos,total_sueldo;
    int valor_diurna,valor_nocturna,valor_dominicales,valor_festivos;
    printf ("Ingrese la cantidad de horas diurnas trabajadas \n");
    scanf ("%d", &horas_diurnas);
    printf ("Ingrese la cantidad de horas nocturnas trabajadas \n");
    scanf ("%d", &horas_nocturnas);
    printf ("Ingrese la cantidad de horas dominicales trabajadas \n");
    scanf ("%d", &horas_dominicales);
    printf ("Ingrese la cantidad de horas festivas trabajadas \n");
    scanf ("%d", &horas_festivos);
    valor_diurna = 2500 * horas_diurnas;
    valor_nocturna = (2500+(2500*0.35))*horas_nocturnas;
    valor_dominicales = (2500+(2500*0.50))*horas_dominicales;
    valor_festivos = (2500+(2500*0.75))*horas_festivos;
    total_sueldo = valor_diurna+valor_nocturna+valor_dominicales+valor_festivos;
    printf ("El precio de las horas diurnas es: %d \n",valor_diurna);
    printf ("El precio de las horas nocturnas es: %d \n",valor_nocturna);
    printf ("El precio de las horas dominicales es: %d \n",valor_dominicales);
    printf ("El precio de las horas festivas es: %d \n",valor_festivos);
    printf ("Sueldo Total Es: %d \n",total_sueldo);
    return 0;
}

