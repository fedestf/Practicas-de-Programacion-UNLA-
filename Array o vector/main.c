#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arreglo[10];
    int i=0;

    for (i=0;i<10;i++)

    {
        printf("\n ingrese un numero en la posicion %d :", i+1);
        scanf("%d",&arreglo[i]);

    }
    for (i=0;i<10;i++)
    {
        printf("\n los numeros son : %d ",arreglo[i]);

    }

    return 0;
}
