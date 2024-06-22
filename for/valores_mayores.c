/******************************************************************************

Escribir un programa que lea n números enteros y calcule la cantidad de valores mayores
o iguales a 1000.
Este tipo de problemas también se puede resolver empleando la estructura repetitiva for.
Lo primero que se hace es cargar una variable que indique la cantidad de valores a ingresar.
Dicha variable se carga antes de entrar a la estructura repetitiva for.
La estructura for permite que el valor inicial o final dependa de una variable cargada
previamente por teclado.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n_valores,valor,i,v_mayores,v_menores;
    
    v_mayores=0;
    
    
    printf("Numero de valores a valorar: ");
    scanf("%d",&n_valores);
    
    for(i=1;i<=n_valores;++i){
        
        printf("Ingresa el %d valor: \n",i);
        scanf("%d",&valor);
        
        if(valor>=1000){
            v_mayores++;
        }
    }
    
    printf("Numero de valores mayores a 1000: %d",v_mayores);

    return 0;
}
