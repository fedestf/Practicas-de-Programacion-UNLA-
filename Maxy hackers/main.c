#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ingresado=1;
    int contador=0;
    int sumatoria=0;
    int promedio;
    int max = 0;
    int min = 0;



   while (ingresado != 0 )



        {   printf("ingrese un numero: \n ");
            scanf("%d",&ingresado);
            contador++;
            sumatoria=sumatoria+ingresado;

            if (max<ingresado)
                {
                    max=ingresado;
                }
            if (ingresado<min)
                {
                    min=ingresado;
                }

        }
promedio = sumatoria/contador;

printf("la cantidad es:%d\n",contador);
printf("la sumatoria es:%d\n",sumatoria);
printf("el promedio es:%d\n",promedio);
printf("el maximo es:%d\n",max);
printf("el minimo es:%d\n",min);
    return 0;
}
