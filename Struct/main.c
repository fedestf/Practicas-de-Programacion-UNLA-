#include <stdio.h>
#include <stdlib.h>

struct alumno {
	int nota;
	char nombre [40];
	int edad;
}alumno1,alumno2;

int main(void) {
    //alumno 1
        printf("\n ingrese el nombre: ");
        fflush (stdin);
        gets (alumno1.nombre);
        printf ("\n ingrese la nota: ");
        fflush (stdin);
        scanf ("%d",&alumno1.nota);
        printf ("\n ingrese la edad: ");
        fflush (stdin);
        scanf ("%d",&alumno1.edad);
        fflush (stdin);
    //alumno 2
        printf("\n ingrese el nombre del alumno 2: ");
        fflush (stdin);
        gets (alumno2.nombre);
        printf ("\n ingrese la nota del alumno 2: ");
        fflush (stdin);
        scanf ("%d",&alumno2.nota);
        printf ("\n ingrese la edad del alumno2: ");
        fflush (stdin);
        scanf ("%d",&alumno2.edad);
        printf("el alumno %s , edad %d tiene nota %d \n", alumno1.nombre, alumno1.edad, alumno1.nota);
        printf("el alumno %s , edad %d tiene nota %d", alumno2.nombre, alumno2.edad, alumno2.nota);
return 0;
}

