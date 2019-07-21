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

    char letra;
    int i;
    int j;
    int largo;

    printf("Ingrese la letra : ");
    scanf("%c",&letra);
    printf("\n Ingrese el largo : ");
    scanf("%i",&largo);

    for (i=0;i<=largo;i++)
        {
        for(j=1;j<=i;j++)
                        {
            printf("%c",letra);
                        }
        printf("\n");

        }

}
