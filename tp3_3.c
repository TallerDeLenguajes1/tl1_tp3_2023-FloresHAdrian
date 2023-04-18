#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    char *v[5]; //Vector de punteros donde se guardan las direcciones de las cadenas
    char *Buff; //Variable auxiliar

    Buff = (char*)malloc(100*sizeof(char));    //Le asigno memoria dinamicamente

    printf("\n\nINGRESE 5 NOMBRES:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Nombre %d: ",i+1);
        gets(Buff);
        v[i] = (char*) malloc ((strlen(Buff)+1) * sizeof(char));
        strcpy(v[i],Buff);
    }
    
    printf("\n\nLISTADO NOMBRES:\n");
    for (int i = 0; i < 5; i++)
    {
        puts(v[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        free(v[i]);
    }
    free(Buff);
    
    return 0;
}
