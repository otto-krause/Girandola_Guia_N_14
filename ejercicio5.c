#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()

{

int a=0;
int alumnos[101][4];
int i,j;
for(i=1;i<101;i++)

    {

for(j=1;j<4;j++)

        {

    printf("Ingrese nota del %d trimestre del alumno %d: ",j,i);
        scanf("%d",&alumnos[i][j]);

        }

    }

do
            {
    printf("¿Quiere cambiar alguna nota?");
    printf("S\241=1 ||| No=0  ");
        scanf("%d",&a);
if(a!=0)

                {

    printf("Ingrese el alumno:");
        scanf("%d",&i);
    printf("Ingrese el trimestre:");
        scanf("%d",&j);
    printf("Ingrese la nota:");
        scanf("%d",&alumnos[i][j]);

                }

            }

while(a!=0);

    return 0;

}
