#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=1, ant, aux, cant;
    int i;

    printf("Ingrese cantidad de elementos deseados: \t");
    scanf("%d", &cant);


    printf("\n");
    printf("0");
    printf("\t");
    if(cant >= 2)
    {
        printf("1");
        printf("\t");
        ant=1;
    }
    for(i=3;i<=cant;i++)
    {
        printf("%d", n);
        printf("\t");
        aux= n + ant;
        ant = n;
        n = aux;
    }


    printf("\n");
    return 0;
}
