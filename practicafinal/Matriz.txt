#include <stdio.h>
#include <stdlib.h>

int main()
{

int  tabla[100][100];
    int filas=0;
    int columnas=0;
    int i=0;
    int j=0;
    printf("ingrese el tamaño de las filas: ");
    scanf ("%d",&filas);
    printf("ingrese el tamaño de las filas: ");
    scanf ("%d",&columnas);

        for (i=0;i<filas;i++)
        {
            for (j=0; j<columnas;j++)
                {
                printf("\n ingrese el numero en la fila [%d] columna [%d]: ",i,j);
                scanf("%d",&tabla[i][j]);
                }
        }

        for (i=0;i<filas;i++)

        {
            for (j=0; j<columnas;j++)
                {
                printf("\t [%d]",tabla[i][j]);
                }
            printf("\n");
        }


    return 0;
}
