#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;
    int resultado;

    printf("Ingrese el primer numero : ");
    scanf("%d",&numero1);
    printf("\n");
    printf("Ingrese el segundo numero : ");
    scanf("%d",&numero2);
    printf("\n");

    if (numero1>numero2)
        {
            printf("El numero %d es mayor al numero %d por lo tanto la suma es %d \n",numero1,numero2,resultado=numero1+numero2);
        }
    if  (numero2>numero1)
        {
            printf("El numero %d es mayor al numero %d por lo tanto la resta es %d \n",numero2,numero1,resultado=numero2-numero1);
        }
    if  (numero1==numero2)
        {
            printf("El primer numero ingresado %d y el segundo ingresado %d son iguales , por lo tanto el producto es %d \n",numero1,numero2,resultado=numero1*numero2);
        }

    return 0;
}
