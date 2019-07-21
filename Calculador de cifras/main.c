#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nro, cifras=0;


    printf("Ingrese un nro entero > 1: ");
    printf("\n");
    scanf("%d", &nro);

    if(nro>0)
    {
        while(nro != 0)
        {
            cifras ++; // cifras = cifras + 1
            nro = nro/10;
        }

    printf("\n");
    printf("La cantidad de cifras es: %d", cifras);
    printf("\n");
    }
    else
    {
        printf("\n");
        printf("Error: el nro debe ser > 0");
        printf("\n");
    }

    return 0;
}
