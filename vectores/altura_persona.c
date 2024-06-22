/******************************************************************************
Definir un vector de 5 componentes de tipo float que representen las alturas de 5 personas.
Obtener el promedio de las mismas. Contar cuántas personas son más altas que el promedio y
cuántas más bajas.
*******************************************************************************/

#include <stdio.h>

int main()
{
    float altura[4],suma,promedio;
    int i,n_altos,n_bajos;
    
    suma=0;
    n_altos=0;
    n_bajos=0;
    
    
    for(i=0;i<=4;++i){
        printf("Altura de la %d persona: ",i+1);
        scanf("%f",&altura[i]);
        
        suma=suma+altura[i];
    }
    
    printf("\n");
    
    promedio=suma/5;
    
    for(i=0;i<=4;++i){
        printf("Altura de la %d persona: %.2f \n",i+1,altura[i]);
        printf("El promedio es de: %.2f \n",promedio);
        
        if(altura[i]>promedio){
            n_altos++;
        }else if(altura[i]<promedio){
            n_bajos++;
        }
        
        printf("Numero de personas que son mas altas que el promedio: %d \n",n_altos);
        printf("Numero de personas que son mas bajas que el promedio: %d \n",n_bajos);
    }
   

    return 0;
}
