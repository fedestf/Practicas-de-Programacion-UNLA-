#include <stdio.h>
#include <stdlib.h>

void impresion();




int main()
{
    impresion();

    return 0;
}

void impresion()
{
    int largo,i,j;
    char caracter;
    printf("ingrese el caracter con el que desea formarlo : ");
    fflush(stdin);
    scanf("%c",&caracter);
    printf("ingrese el largo de la figura : ");

    scanf("%i",&largo);

    // normal
    for (i=0;i<=largo;i++){

            for (j=1;j<=i;j++){

           printf("%c",caracter);
            }
        printf("\n");


        }

// invertido
//    for (i=largo;i>=1;i--){   // invertido

//            for (j=1;j<=i;j++){

//            printf("%c",caracter);
 //           }
 //       printf("\n");

//        }


}
