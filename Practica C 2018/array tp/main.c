#include <stdio.h>
#include <stdlib.h>

int main()

{
    int x=0;
    int arreglo[x];
    int i=0;
    int contador=0;
    int contadorimpar=0;
    int aux=0;
    int auxmin=0;
    int max=0;
    int min=0;
    int posicionmax=0;
    int posicionmin=0;

    printf("ingrese el largo del vector : ");
    scanf("%d",&x);

    for (i=0;i<x;i++)
    {
        printf("\n ingrese un numero en la posicion %d :", i+1);
        scanf("%i",&arreglo[i]);
        fflush(stdin);

        if (arreglo[i]%2==0)
        {
            contador=contador+1;
        }
        if (arreglo[i]%2!=0)
        {
                contadorimpar=contadorimpar+1;
        }
    }

    system("cls");
        printf("el vector1 es :");
    for (i=0;i<x;i++)

    {

        printf("\n [%i] ",arreglo[i]);
    }





        printf("\n\n Cant. nros pares en el vector : %i\n",contador);
        printf(" Cant. nros impares en el vector : %i \n",contadorimpar);

        printf("\n los numeros del vector2 son :\n");

	for( i=x-1; i>=0; i-- )
        {

			printf( "\n [%i] ", arreglo[i] );
		};


}
