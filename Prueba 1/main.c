#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int a;
    int b;
    int c;
    c=0;
    a=rand()%100+1;
     printf("\tIngrese un numero :");

     while(c!=1)
                {
                scanf("%d",&b);
            if (a>b)
                {
            printf("\tIngrese un numero mayor");
                }
            if (a<b)
                {
                printf("\tIngrese un numero menor");
                }
            if (a==b)
                {

                    c==1;
                    system("cls");
                    printf("has ganado");
                }

            }

}
