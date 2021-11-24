#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{

int matriz[2] [3]={0}, I=0, J=0;
    printf("Ingrese tres n\243meros por fila:\n");
for(I=0; I<2; I++)

    {

for(J=0; J<3; J++)

        {

        scanf("%d", &matriz[I] [J]);

        }

    printf("\n");

    }

for(I=0; I<2; I++)

    {

for(J=0; J<3; J++)

        {

    printf("%d\t", matriz [I] [J]);

        }

        printf("\n");

    }

    return 0;

}

