#include <stdio.h>
#include <stdlib.h>

int main()
{
    int largo,i,impar=0;

    printf("Largo del vector : ");
    scanf("%i",&largo);
    int vector[largo];

    for(i=0;i<largo;i++){

            printf("ingrese el valor en posicion %i :",i);
            scanf("%i",&vector[i]);
            if (vector[i]%2!=0)
                {
                impar=impar+1;
                }

            }
       printf("vector normal \n ");
       for (i=0;i<largo;i++)
        {
        printf("[%i] ",vector[i]);
        }

    printf("vector invertido y multiplicado x2 \n");
    for (i=largo-1;i>=0;i--)
        {
        printf("[%i] ",vector[i]*2);
        }

    printf("impares: %i",impar);
    return 0;
}
