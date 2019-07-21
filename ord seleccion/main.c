#include <stdio.h>
#include <stdlib.h>
//ord por seleccion
int main()
{
    int a[5]={3,4,1,5,2};
    int i,j,aux,min;
    for (i=0;i<5;i++){
        min=i;
            for(j=i+1;j<5;j++){
                if (a[j]< a[min]){
                min=j;
                }
            }
        aux=a[i];
        a[i] = a[min];
        a[min] = aux;
    }
    for (i=0;i<5;i++){
        printf(" %d",a[i]);
    }
        return 0;
}
