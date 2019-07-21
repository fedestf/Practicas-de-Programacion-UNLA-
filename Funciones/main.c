#include <stdio.h>
#include <stdlib.h>

//funciones

int multiplicacion (int num1, int num2) { //declaro funcion
int resultado;//declaro variables
resultado = (num1*num2);//operacion
return resultado;//lo que devuelve
}

int main(void)
{
    int num1,num2,resultado;
    printf("\n ingrese un numero : ");
    scanf ("%d",&num1);
    printf("\n ingrese su multiplicador: ");
    scanf ("%d",&num2);

    resultado=multiplicacion (num1,num2); //llamar funcion
    printf("El resultado de la multiplicacion es : %d",resultado);//dos decimales
                                                        //despues del .
return 0;
}

