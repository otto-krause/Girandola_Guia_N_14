#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()

{

int t=0;
float piso;
int departamento[21][7];
int i,j;
for(i=1;i<=20;i++)

    {

for(j=1;j<=6;j++)

        {
    printf("Ingrese habitantes del departamento %d correspondiente al piso %d: ",j,i);
        scanf("%d",&departamento[i][j]);
        }
    }

for(i=1;i<=20;i++)

            {

for(j=1;j<=6;j++)

                {

                t+=departamento[i][j];

                }
            }

for(i=1;i<=20;i++)

                    {

                piso=0;
for(j=1;j<=6;j++)

                    {

                piso+=departamento[i][j];

                    }

                piso=piso/6;
    printf("El promedio de habitantes del piso %d es: %.4f\n",i,piso);

                    }

    printf("El total de habitantes es: %d",t);

    return 0;
}
