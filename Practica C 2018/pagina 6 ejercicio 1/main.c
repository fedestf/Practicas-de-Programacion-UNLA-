#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pasaje;
    int resultado;
    int preciofinal;

    printf("Ingrese el costo del pasaje : ");
    scanf("%d",&pasaje);

    resultado=(pasaje*30)/100;
    preciofinal=resultado+pasaje;
    printf("El precio final del pasaje es %d \n ",preciofinal);

    return 0;
}
