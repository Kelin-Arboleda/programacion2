#include <stdio.h>
int main()
{
 int terabytes,gigabytes,megabytes,kilobyte,bytes;
printf("Introduzca La Cantidad de Terabytes: \n");
scanf("%d",&terabytes);
gigabytes=terabytes*1024;
megabytes=gigabytes*1024;
kilobyte=megabytes*1024;
bytes=kilobyte*1024;

printf("El Resultado en GB es= %d  \n",gigabytes);
printf("El Resultado en MB es= %d  \n",megabytes);
printf("El Resultado en KB es= %f \n",kilobyte);
printf("El Resultado en Bytes es= %f \n",bytes);
return 0;

}
