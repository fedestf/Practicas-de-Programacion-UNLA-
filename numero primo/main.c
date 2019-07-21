#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x=0,i;
    printf("ingrese un numero : \t");
    scanf("%d",&n);

      for (i=2;i<=n-1;i++)
        {

            if ((n%i)==0)

                {

                    x=1;

                };
        };
                if (x==1)
                        {
                            printf("\n");
                            printf("el  numero no es primo");
                        }
                else
                        {
                        printf("\n");
                        printf("el numero es primo");

                        }
printf("\n");



        return 0;
}
