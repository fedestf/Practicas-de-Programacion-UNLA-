#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas,sueldo,aumento1=100,aumento2=50;

    printf("Ingrese las horas del empleado : ");
    scanf("%d",&horas);

    sueldo=horas*5;

    if (horas<100)
    {
        printf("el sueldo del empleado es %d",sueldo);
    }

    if (horas>100)
    {
        sueldo=sueldo+aumento1;
        printf("el nuevo sueldo del empleado es de %d",sueldo);

    }

    if (horas>200)
    {
        sueldo=sueldo+aumento2;
        printf("el nuevo sueldo del empleado es de %d",sueldo);

    }


    return 0;
}
