#include <stdio.h>
#include <stdlib.h>

int main()
{
    int desde;
    int hasta;
    int i=0;
    int z=0;

    printf("Ingrese un desde : \n");
    scanf("%d",&hasta);
    printf("Ingrese un hasta : \n");
    scanf("%d",&desde);

    for (desde;desde>=hasta;desde--)
    {
        z=desde;
        i=i+z;
        printf("desde %d el valor es %d \n",z,i);
    }


    return 0;
}
