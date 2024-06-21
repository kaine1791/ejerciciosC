/******************************************************************************
Se ingresan un conjunto de n alturas de personas por teclado.
Mostrar la altura promedio de las personas.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n_personas,i;
    float altura,promedio,acumulador;
    
    i=1;
    acumulador=0;
    
    
    printf("Numero de personas: ");
    scanf("%d",&n_personas);
    
    while(i<=n_personas){
        
        printf("Altura de la %dº persona: ",i);
        scanf("%f",&altura);
        acumulador=acumulador+altura;
        
        i++;
    }
    
    promedio=acumulador/n_personas;
    
    printf("La altura promedio es de %.2f \n",promedio);
    
  
    return 0;
}
