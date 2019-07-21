#include <stdio.h>

int main() // cuadrado de altura por anchura elegida
{
    int i,j,fila,columna,car;

    printf("Ingrese un numero: ");
    scanf("%c",&car);
    printf("ingrese fila : "); //largo
    scanf("%i",&fila);
    printf("ingrese columna: "); //ancho
    scanf("%i",&columna);

    for(i=0; i<fila ; i++){
        for(j=0; j<columna; j++){
            printf("%c",car);
        }
        printf("\n");
    }

    getch();
    return 0;
}
