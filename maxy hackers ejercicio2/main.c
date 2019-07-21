#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero1;
    int numero2;
    int cuadrado;
    int cubo;
    printf("ingrese un numero para elevar al cuadrado :\n");
    scanf("%d",&numero1);
    printf("Ingrese un numero para elevar al cubo : \n");
    scanf("%d",&numero2);

    cuadrado=numero1*numero1;
    cubo=numero2*numero2*numero2;

    if (cubo>cuadrado)
        {

            printf("el mayor es %d elevado al cubo",numero2);
            printf("\n");
        }

    if (cuadrado>cubo)
        {

            printf("el mayor es %d elevado al cuadrado",numero1);
            printf("\n");
        }

    return 0;
}
