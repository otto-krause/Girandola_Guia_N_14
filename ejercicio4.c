#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{

int a[4][13]={0},sum=0,sum2=0,i=0,j=0;
do

    {

    printf("Ingrese el n\243mero del coche(0-12):\n");
        scanf("%d",&j);
if(j>=1)

        {

    printf("Ingrese la l\241nea(1-3):\n");
        scanf("%d",&i);
    printf("Ingrese la recaudaci\242n:");
        scanf("%d",&a[i][j]);

        }

else

            {

                                        break;

            }

    }

while(j>=1);

                {

for(int i=1 ; i<=3; i++)

                    {

            sum=0;
for(int j=1; j<=12; j++)

                        {

    printf("La recaudaci\242n de la l\241nea %d con el colectivo %d es de :%d \n",i,j,a[i][j]);
            sum=sum+a[i][j];

                        }

    printf("\n");
            sum2=sum2+sum;
    printf("La recaudaci\242n de la l\241nea %d es de: %d\n",i,sum);

                    }

                }

    printf("La recaudaci\242n total es de: %d",sum2);

    return 0;

}



