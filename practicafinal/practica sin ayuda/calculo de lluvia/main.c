#include <stdio.h>
#include <stdlib.h>

int main()
{   int mes,localidad,i,j,cantidad;
        printf("ingrese la cantidad de meses: ");
        scanf("%i",&mes);
        printf("ingrese la cantidad de localidades : ");
        scanf("%i",&localidad);
    int vector[mes][localidad];

        for (i=0;i<=mes;i++)
            {
                for(j=0;j<=localidad;j++)
                    {
                        printf("ingrese el valor %i %i",i,j);
                        scanf("%i",&vector[i][j]);
                    }
            }

        for (i=0;i<=mes;i++)
            {
                for (j=1;j<=localidad;j++){

                    printf("%d , %d",vector[i][j]);
                }
        }

    printf("Hello world!\n");
    return 0;
}
