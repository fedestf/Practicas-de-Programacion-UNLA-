#include <stdio.h>
#include <stdlib.h>
struct empleados
    {
        char nombre[10];
        int edad;
        char localidad[10];
        char provincia [10];


    }empleados[];
int main()
{
    int i,cantidad;
    printf("\n EMPLEADOS : ");
    scanf("%i",&cantidad);

    for (i=1;i<=cantidad;i++  )
        {
            printf("ingrese el nombre del empleado %i : ",i);
            fflush(stdin);
            gets(empleados[i].nombre);
            printf("Ingrese la edad del empleado %i : ",i);
            scanf("%i",&empleados[i].edad);
            printf("ingrese la localidad del empleado %i : ",i);
            fflush(stdin);
            gets(empleados[i].localidad);
            printf("ingrese la provincia del empleado %i : ",i);
            fflush(stdin);
            gets(empleados[i].provincia);
        }

    for(i=1;i<=cantidad;i++)

        {
                printf("--------- empleado %i------",i);
            printf("\n nombre del empleado : %s  ",empleados[i].nombre);


            printf("\n edad del empleado : %i  ",empleados[i].edad);

            printf("\nlocalidad del empleado : %s  ",empleados[i].localidad);


            printf("\nprovincia del empleado : %s \n) ",empleados[i].provincia);

        }


    return 0;
}
