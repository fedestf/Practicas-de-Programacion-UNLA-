#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i,largo,impar=0;
    printf("LARGO DE VECTOR : ");
    scanf("%i",&largo);
    int tabla[largo];

    for (i=0;i<largo;i++) // insercion de datos
        {
            printf("VALOR EN POSICION %d : ",i+1);
            scanf("%i",&tabla[i]);
                    if (tabla[i]%2!=0)
                        {
                        impar=impar+1;
                        }
        }
    printf("\n - VECTOR 1 - : \n");
    for (i=0;i<largo;i++) // impresion de datos
        {
            printf("[%i] ",tabla[i]);
        }

    printf("\n - VECTOR 2 (INVERTIDO Y MULTIPLICADO X2) -\n");
    for (i=largo-1;i>=0;i--)
        {
            printf("[%i] ",tabla[i]*2);
        }
    printf("\n\n NUMEROS IMPARES : %i \n\n",impar);

    return 0;
}
