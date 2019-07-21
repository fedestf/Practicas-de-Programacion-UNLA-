#include <stdio.h>
#include <stdlib.h>

struct empleado
            {
        int legajo;
        char nombre [30];
        int dni;
        char fechaNacimiento[10];
        char fechaIngreso[10];
        char nombreSector[30];
        int sueldo;

            }empleado[];

int main(void)
{
 int i,cantidad;
    printf("CANTIDAD DE EMPLEADOS : ");
    scanf("%i",&cantidad);

    for (i=1;i<=cantidad;i++)
        {
            printf("\nLEGAJO empleado n %i: ",i);
            scanf("%i",&empleado[i].legajo);
            printf("\nNOMBRE empleado n %i: ",i);
                       fflush (stdin);
            gets(empleado[i].nombre);
            printf("\nDNI empleado n %i: ",i);
            scanf("%i",&empleado[i].dni);
            printf("\nFECHA NACIMIENTO empleado n %i: ",i);
                       fflush (stdin);
            gets(empleado[i].fechaNacimiento);
            printf("\nFECHA INGRESO empleado n %i: ",i);
                       fflush (stdin);
            gets(&empleado[i].fechaIngreso);
            printf("\nSECTOR empleado n %i: ",i);
                       fflush (stdin);
            gets(empleado[i].nombreSector);
            printf("\nSUELDO empleado n %i: ",i);
            scanf("%i",&empleado[i].sueldo);
        }



    for (i=1;i<=cantidad;i++)
        {


            printf("\n------------- EMPLEADO %i ----------------\n",i);

            printf("\nLEGAJO : %i ",empleado[i].legajo);

            printf("\nNOMBRE : %s ",empleado[i].nombre);

            printf("\nDNI : %i ",empleado[i].dni);

            printf("\nFECHA NACIMIENTO : %s ",empleado[i].fechaNacimiento);

            printf("\nFECHA INGRESO : %s ",empleado[i].fechaIngreso);

            printf("\nSECTOR : %s ",empleado[i].nombreSector);

            printf("\nSUELDO : %i ",empleado[i].sueldo);


            }

    return 0;
}

