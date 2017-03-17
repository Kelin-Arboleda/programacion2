#include <stdio.h>
int main(){
        int m,n,f,c,i,j,k;
    float A[2][4],B[4][2],C[6][6];
    printf("Ingrese la fila y columna de la primera matriz\n"); scanf("%d %d",&m, &n);
    printf("Ingrese la fila y columna de la segunda matriz\n"); scanf("%d %d",&f, &c);
    printf("\n");
    if (n == f){
    printf(" Valor de la matriz \n");
    }
     for (i = 1; i <= m; i++) {
        for (j = 1; j <= n; j++){
            printf("A(%d %d) ",i,j);
            scanf ("%f",&A[i][j]);
     }
    }

    printf("\n");
    printf("Valor de la segunda matriz\n");
      for (i = 1; i <= f; i++) {
        for (j = 1; j <= c; j++){
            printf("B(%d,%d)",i,j);
            scanf ("%f",&B[i][j]);
            }
        }

     for (i = 1; i <= m; i++){
        for (j = 1; j <= c; j++){
            C[i][j]=0;
             for (k=1;k<=n;k++){
              C[i][j]=C[i][j]+A[i][k]*B[k][j];
              }
           }
        }
     printf(" La multiplicacion es:\n");

      for (i=1;i<=m;i++){
        for (j=1;j<=c;j++){
          printf("C(%d,%d)=\t%4.2f\n",i,j,C[i][j]);
        }
    }
    return 0;
}

