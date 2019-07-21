#include <stdio.h>
#include <stdlib.h>

int main()
{
    {
   srand (time(NULL));
   int a;
   int b;
   int c;
   c=0;
   a=rand()%100;
   printf ("\tIngrese un numero\n");
   while (c!=1)
   {
       scanf ("%i",&b);
       if ( a<b )
       {
           printf ("\tIngrese un numero menor\n");
       }
       if ( a>b )
       {
           printf ("\tIngrese un numero mayor\n");
       }
       if (a==b)
       {

           c=1;
       }
   }
  system("cls");
  printf("El numero ganador era %d , GANASTE!",b);

}
}
