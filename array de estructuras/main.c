#include <stdio.h>
#include <stdlib.h>

struct alumno {
	int nota;
	char nombre [40];
	int edad;
}alumno[3];

int main(void) {
    int i;
    for(i=0;i<3;i++){
            printf("\n ingrese el nombre del alumno %d: ",(i+1));
            fflush (stdin);
            gets (alumno[i].nombre);
            printf ("\n ingrese la nota del alumno %d : ",(i+1));
            fflush (stdin);
            scanf ("%d",&alumno[i].nota);
            printf ("\n ingrese la edad del alumno %d: ",(i+1));
            fflush (stdin);
            scanf ("%d",&alumno[i].edad);
            fflush (stdin);
            }

    for (i=0;i<3;i++){
                printf("\n Alumno #%d ",(i+1));
                printf ("\n Nombre %s ",alumno[i].nombre);
                printf ("\n edad %d ",alumno[i].edad);
                printf ("\n nota %d ",alumno[i].nota);
                system("pause");
                system("cls");

    }

return 0;
}

