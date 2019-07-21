#include <stdio.h>
#include <conio.h>
int main()
{

    int matriz[50][50],filas,columnas,i,j;

    printf("Digite el numero de filas: ");
    scanf("%i",&filas);
    printf("Digite el numero de columnas: ");
    scanf("%i",&columnas);

    printf("\n\n");

    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf("Digite matriz[%i][%i]: ",i+1,j+1);
            scanf("%i",&matriz[i][j]);
        }
    }
    printf("\n\n");

    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf("%i ",matriz[i][j]);
        }
         printf("\n\n");
    }

    getch();
    return 0;
}
