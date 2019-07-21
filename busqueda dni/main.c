#include <stdio.h>
#include <stdlib.h>
struct nrodni{
    int dni;

}nrodni[3];

int main()
{
    int i;

    for (i=0; i<3 ; i++){
    printf("Ingrese el dni en la posicion %d : \n",(i+1));

    scanf("%d",&nrodni[i].dni);
    fflush(stdin);
    }




 if(nrodni[0].dni>nrodni[1].dni && nrodni[0].dni>nrodni[2].dni)
{

             printf("El numero mas grande es: %d \n",nrodni[0].dni);
}
if(nrodni[1].dni>nrodni[0].dni && nrodni[1].dni>nrodni[2].dni)
{
       printf("El numero mas grande es: %d \n",nrodni[1].dni);
}
if(nrodni[2].dni>nrodni[1].dni && nrodni[2].dni>nrodni[0].dni)
{
       printf("El numero mas grande es: %d \n",nrodni[2].dni);
}




    return 0;
}
