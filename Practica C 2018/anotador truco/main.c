#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    int b=0;



    while (a || b <30)
    {
        printf("ingrese el puntaje del grupo A :");
        scanf("%d",&a);
        printf("ingrese el puntaje del grupo B :");
        scanf("%d",&b);

    int grupob=b;
    int grupoa=a;
         if (a<30)
            {

                printf("puntaje actual grupo A: %d \n",grupoa);
                                            grupoa+a;


            }
        if (b<30)
        {

                printf("puntaje actual grupo B : %d \n",grupob);
                                            grupob=grupob+b;


        }





    }
   printf("el gandor es x");
    return 0;
}
