#include <stdio.h>
#include <stdlib.h>

struct nrodni {
	char dni[30];
}dni[3];

int main(void) {
    int i;
    char aux;
    char nrodni;

    for(i=0;i<3;i++){
            printf("\n ingrese el dni numero #%d: ",(i+1));
            fflush (stdin);
            gets(nrodni[i].dni);
            fflush (stdin);

            }

    for (i=0;i<3;i++){
        aux=nrodni[i].dni;
        if(aux>nrodni[i+1].dni)
            {
                if (aux>nrodni[i+2].dni){
                    printf("el mayor es : %d",aux);
                }

            }

    }

return 0;
}
