/******************************************************************************

Desarrollar un programa que solicite la carga de 10 números e imprima la suma de
los últimos 5 valores ingresados.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int numero,i,suma;
    
    suma=0;
    
    for(i=1;i<=10;++i){
        printf("Ingrese el %d valor: ",i);
        scanf("%d",&numero);
        
        
        
        if(i>5 && i<=10){
            suma=suma+numero;
        }
        
    }
    
    printf("La suma de los ultimos 5 numeros es: %d \n",suma);

    return 0;
}
