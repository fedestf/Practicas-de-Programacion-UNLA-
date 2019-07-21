#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int a;
    int b;
    int c;

    a=rand()%5+1;
     printf("\tIngrese un numero entre 1 y 6 : ");


                scanf("%d",&b);

                if (b>6)
                    {
                        printf("Error el numero debe estar entre 1 y 6 \n");
                    }

                if (a!=b)
                    {
                        printf("Has perdido");
                    }

                if (a==b)
                {


                    system("cls");
                    printf("Has ganado");
                }


}
