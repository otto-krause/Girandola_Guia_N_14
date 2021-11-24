#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{

int a[2] [3];
for(int i=0; i<2; i++)

    {

for (int j=0; j<3; j++)

        {

    printf("Ingrese el valor de la fila %d y la columna %d: ", i+1, j+1);
        scanf("%d", &a[i][j]);

        }

    }

for(int i=0; i<3; i++)

            {

            a[0][i] *= 4;

            }

for(int i=0; i<3; i++)

                {

            a[1][i] *= 3;

                }

for(int i=0; i<2; i++)

                    {

for (int j=0; j<3; j++)

                        {

    printf("%d\t", a[i][j]);

                        }

                    }

}
