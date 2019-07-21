#include <stdio.h>
#include <stdlib.h>

int main()
{ //array de 10 numeros
    int a[10]={3,6,1,2,7,8,9,4,10,5};
    int i,j,aux,dato,inf,sup,mitad;
    char bandera = 'F';
    //metodo burbuja
    for(i=0;i<10;i++){
        for (j=0;j<10;j++){
            if(a[j]>a[j+1]){
                aux= a[j];
                a[j]=a[j+1];
                a[j+1]=aux;
            }
        }
    }
    for (i=0;i<10;i++){
        printf (" %d",a[i]); // numeros en orden
    }

    printf(" \n Digite un dato a buscar : ");
    scanf("%d",&dato);
    //busqueda binaria
    inf=0;
    sup=10;
    while(inf<=sup){
            mitad= (inf+sup)/2;
            if (a[mitad]==dato){
                bandera = 'V';
                break;
            }
            if (a[mitad]>dato){
                sup = mitad;
                mitad = (inf+sup)/2;
            }
            if (a[mitad]<dato){
                inf = mitad;
                mitad = (inf+sup)/2;
            }
    }
    if (bandera=='F'){
        printf("el numero no existe");
    }
    else if (bandera == 'V'){
        printf("el numero  existe en la posicion : %d",mitad);
    }
    return 0;
}
