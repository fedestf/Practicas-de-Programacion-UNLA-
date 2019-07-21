#include <stdio.h>
#include <stdlib.h>
//mayor de un array
int main()
{
    int numeros [100];
    int cantidadnumeros=0;
    int i;
    int mayor=0;
        printf("Ingrese la cantidad de numeros que quiere introducir: ");
        scanf ("%d",&cantidadnumeros);

        for (i=0;i<cantidadnumeros;i++){
            printf ("\n ingrese el numero #%d : ",i+1);
            scanf ("%d",&numeros[i]);
        }

        for (i=0;i<cantidadnumeros;i++){
            if (numeros[i]>mayor){
                mayor=numeros[i];
            }
        }
            printf("el mayor es el numero %d , que esta en la posicion %d",mayor,i);
    return 0;
}
