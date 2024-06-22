/******************************************************************************
Definir un vector de 5 componentes de tipo float que representen las alturas de 5 personas.
Obtener el promedio de las mismas. Contar cuántas personas son más altas que el promedio y
cuántas más bajas.
*******************************************************************************/

#include <stdio.h>

int main()
{
    float altura[4];
    int i;
    
    for(i=0;i<=4;++i){
        printf("Altura de la %d persona: ",i+1);
        scanf("%f",&altura[i]);
    }
    
    printf("\n");
    
    for(i=0;i<=4;++i){
        printf("Altura de la %d persona: %.2f \n",i+1,altura[i]);
    }
   

    return 0;
}
