#include <stdio.h>
#include <stdlib.h>

int main()
{

int  tabla[100][100];
    int localidades=0;
    int meses=0;
    int i=0;
    int j=0;
    int x=0;
    int y=0;

    printf("Localidades: ");
    scanf ("%d",&localidades);
    printf("Meses: ");
    scanf ("%d",&meses);
//--------------------------------------------------------------ingreso de datos
        for (i=0;i<localidades;i++)
        {
            for (j=0; j<meses;j++)
                {
                printf("\n MM LLUVIA localidad [%d] mes [%d]: ",i,j);
                scanf("%d",&tabla[i][j]);
                }
        }
//------------------------------------------------------------------------------------- muestra de la matriz
        for (i=0;i<localidades;i++)

        {
            for (j=0; j<meses;j++)
                {
                printf("\t [%d]",tabla[i][j]);
                }
            printf("\n");
        }
//----------------------------------------------------------------------------------- calculo de lluvia anual
        for (i=0;i<localidades;i++)
            {
               int totala=0; // vuelvo a poner en 0 el acumulador

                for (j=0;j<meses;j++)
                    {
                            if (i==y)
                                    {
                                    totala=totala+tabla[i][j];
                                    }
                    }

                    y=y+1; // incremento comparador que se va a igualar para comparar por localidad
                    printf("\n Lluvia anual en la localidad %i : %i",i,totala);
            }



// ------------------------------------------------------------------------------ lluvia mensual
        for (j=0;j<meses;j++)
            {
                int totalm=0;

                    for (i=0;i<localidades;i++)
                        {

                            if (j==x)
                                    {
                                totalm=totalm+tabla[i][j];
                                    }
                        }

                x=x+1;
                printf("\n el total del mes %i  es de %i",j,totalm);
            }


    return 0;
}
