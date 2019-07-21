#include <stdio.h>
#include <stdlib.h>

// procedimiento

void calcular (numero){ //es void porque no devuelve nada, hace todo dentro.
 if(numero%2==0){
    printf("\n El numero es par \n");
 }
 else {
    printf("\n El numero es impar \n");
 }

    }
int main()
{
    int numero;
    printf("Ingrese un numero : ");
    scanf("%d",&numero);
    calcular(numero);//llamo procedimiento


    return 0;

}
