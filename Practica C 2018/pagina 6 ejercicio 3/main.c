#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1,numero2,numero3,suma,promedio,contador=3,notas;

    printf("Ingrese el primer numero : ");
    scanf("%d",&numero1);
    printf("Ingrese el segundo numero : ");
    scanf("%d",&numero2);
    printf("Ingrese el tercer numero : ");
    scanf("%d",&numero3);

    notas=numero1+numero2+numero3;
    promedio=notas/contador;

    if (promedio>7)
    {
        printf("materia aprobada con promedio de %d",promedio);
    }
    else
    {
      printf("Materia desaprobada con promedio de %d",promedio);
    }

    return 0;
}
