/******************************************************************************
Confeccionar un programa que permita ingresar un valor del 1 al 10 y nos muestre
la tabla de multiplicar del mismo (los primeros 12 términos)
Ejemplo: Si ingreso 3 deberá aparecer en pantalla los valores 3, 6, 9, hasta el 36.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int valor,tabla,i;
    
    valor=0;
    
   
        printf("Ingrese un valor del 1 al 10: ");
        scanf("%d",&valor);
        
        while(valor<0 || valor>10){
            printf("Valor introducido no es valido \n");
            printf("Ingrese un valor del 1 al 10: ");
            scanf("%d",&valor);
        }
    
    
    for(i=1;i<=12;++i){
        printf("Tabla del %d: %d * %d = %d \n",valor,valor,i,valor*i);
    }

    return 0;
}
