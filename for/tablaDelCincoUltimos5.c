/******************************************************************************

  Desarrollar un programa que muestre la tabla de multiplicar del 5 (del 5 al 50)

*******************************************************************************/

#include <stdio.h>

int main()
{
    int tabla,numero,i;
    
    numero=5;
    tabla=0;
    
    for(i=0;i<=50;++i){
        
        if(i>=5 && i<=50){
            printf("%d * %d: %d \n",numero,i,numero*i);
        }
        
        
        
        
    }

    return 0;
}
