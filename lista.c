/******************************************************************************

Realizar un programa que permita cargar dos listas de 3 valores cada una. 
Informar con un mensaje cual de las dos listas tiene un valor acumulado mayor 
(mensajes "Lista 1 mayor", "Lista 2 mayor", "Listas iguales")
Tener en cuenta que puede haber dos o más estructuras repetitivas en un algoritmo.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int lista1,lista2,n_valores,i;
    float v_lista1,v_lista2,x;
    
    i=1;
    n_valores=3;
    x=0;
    v_lista1=0;
    v_lista2=0;
    
    while(i<=n_valores){
        
        printf("Ingrese el %dº valor: ",i);
        scanf("%f",&x);
        v_lista1=v_lista1+x;
        ++i;
    }
    
    printf("El valor total de la lista1 es de: %.2f \n",v_lista1);
    
    i=1;
    x=0;
    
    while(i<=n_valores){
        
        printf("Ingrese el %dº valor: ",i);
        scanf("%f",&x);
        v_lista2=v_lista2+x;
        ++i;
    }
    
    printf("El valor total de la lista2 es de: %.2f \n",v_lista2);
    
    if(v_lista1==v_lista2){
        printf("Los valores de ambas listas son iguales \n");
    }else if(v_lista1>v_lista2){
        printf("Los valores de la lista1 son mayores \n");
    }else if(v_lista1<v_lista2){
        printf("Los valores de la lista2 son mayores \n");
    }else{
        printf("Ha ocurrido un error \n");
    }
    
    
    

    return 0;
}
