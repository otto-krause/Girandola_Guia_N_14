#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{
int a[3][12];
int i , j, sum1=0, sum2=0, sum3=0, sumatoria=0;
    printf("Ingrese la recaudaci\242n de cada coche y de cada L\241nea |||ingrese 4 d\241gitos|||:\n");
for(i=1;i<=3;i++)

    {

    printf("\nL\241nea  %d\n",i);
for(j=1;j<=12;j++)

         {

    printf("Colectivo %d [%d , %d]: ",j,i,j);
        scanf("%d",&a[i-1][j-1]);

         }

    }

    printf("\n\nRecaudacion total por la línea de colectivo\n");
    printf("\nL\241nea                                                        Colectivos\n");
    printf("       n_1       n_2      n_3      n_4      n_5      n_6      n_7      n_8      n_9      n_10     n_11     n_12\n");
for(i=0;i<3;i++)

            {

    printf("  %d",i+1);

for(j=0;j<12;j++)

                {

    printf("     %d  ",a[i][j]);

                }

    printf("\n");

            }

for(i=0;i<12;i++)

                    {

            sum1=sum1+a[0][i];

                    }

for(i=0;i<12;i++)

                        {

            sum2=sum2+a[1][i];

                        }

    printf("\n\nRecaudacion total por coche\n");

for(i=0;i<12;i++)

                            {

            sum3=sum3+a[2][i];

                            }

int tabla_por_linea[3][2]={{1,sum1},{2,sum2},{3,sum3}};
    printf("\nL\241nea   Recaudo Total \n          x L\241nea\n");
for(i=0;i<3;i++)

                                {

for(j=0;j<2;j++)

                                    {

    printf("  %d     ",tabla_por_linea[i][j]);

                                    }

    printf("\n");

                                }

            sumatoria=sum1+sum2+sum3;
int tabla_total[1][3]={3,12,sumatoria};
    printf("\n\nRecaudaci\242n total en general\n");
    printf("\nTotal de L\241neas  Total de coches Recuadaci\242n total\n");
for(i=0;i<1;i++)

                                        {

for(j=0;j<3;j++)

                                            {

    printf("       %d         ",tabla_total[i][j]);

                                            }

                                        }

    return 0;

}


