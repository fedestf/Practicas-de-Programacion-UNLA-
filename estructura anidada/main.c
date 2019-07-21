#include <stdio.h>
#include <stdlib.h>
struct info_direccion{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleado {
    char nombre [20];
    struct info_direccion dir_empleado;
}empleados[2];
int main()
{
    int i;
    for (i=0;i<2;i++){
        printf("\nIngrese el nombre del empleado #%d : ",i+1);
        gets(empleados[i].nombre);
        printf("\nIngrese la direccion del empleado #%d : ",i+1);
        gets(empleados[i].dir_empleado.direccion);
        printf("\nIngrese la ciudad del empleado #%d : ",i+1);
        gets(empleados[i].dir_empleado.ciudad);
        printf("\nIngrese la provincia del empleado #%d : ",i+1);
        gets(empleados[i].dir_empleado.provincia);
    }

    for (i=0;i<2;i++){
        printf("\n______________________________\n");
        printf("\nlos datos del empleado #%d \n",i+1);
        printf("\n nombre : %s \n", empleados[i].nombre);
        printf("\nla direccion es %s\n",empleados[i].dir_empleado.direccion);
        printf("\nLa ciudad es : %s\n",empleados[i].dir_empleado.ciudad);
        printf("\nla provincia es: %s\n",empleados[i].dir_empleado.provincia);
    }


return 0;
}
