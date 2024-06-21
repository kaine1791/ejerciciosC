/******************************************************************************
Una planta que fabrica perfiles de hierro posee un lote de n piezas.
Confeccionar un programa que pida ingresar por teclado la cantidad de
piezas a procesar y luego ingrese la longitud de cada perfil; sabiendo
que la pieza cuya longitud esté comprendida en el rango de 1.20 y 1.30 son aptas.
Imprimir por pantalla la cantidad de piezas aptas que hay en el lote.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int n_piezas,aptas,i,x;
   float longitud;
   
   i=1;
   x=0;
   
   printf("Ingrese numero de piezas a procesar: ");
   scanf("%d",&n_piezas);
   
   while(i<=n_piezas){
       
       printf("Longitud de la %dº pieza: ",i);
       scanf("%f",&longitud);
       
       if(longitud>= 1.20 && longitud <= 1.30){
           aptas= ++x;
       }
       
       ++i;
   }
   
   printf("Piezas aptas: %d ",aptas);

    return 0;
}
