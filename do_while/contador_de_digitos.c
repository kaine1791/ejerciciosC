/******************************************************************************
Escribir un programa que solicite la carga de un número entre 0 y 999,
y nos muestre un mensaje de cuántos dígitos tiene el mismo.
Finalizar el programa cuando se cargue el valor 0.
*******************************************************************************/

#include <stdio.h>

int main()
{
   int numero,digitos,i;
   
   
   
   do{
        printf("Ingrese un numero entre 0 y 999: ");
        scanf("%d",&numero);
        
        if(numero<10 && numero>0){
            digitos=1;
            printf("Numero de digitos: %d \n",digitos);
        }else if(numero>=10 && numero<100){
            digitos=2;
            printf("Numero de digitos: %d \n",digitos);
        }else if(numero>=100){
            digitos=3;
            printf("Numero de digitos: %d \n",digitos);
        }else if(numero==0){
            printf("Programa finalizado. \n");
        }
   }while(numero != 0);
    
  
    return 0;
}
