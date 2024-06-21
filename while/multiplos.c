/******************************************************************************
Mostrar todos los múltiplos de 8 que hay hasta el valor 500.
Debe aparecer en pantalla 8 - 16 - 24, etc.

*******************************************************************************/

#include <stdio.h>

int main()
{
  int multiplos,numero,valor_maximo,i;
  
  i=1;
  multiplos=0;
  
  printf("Ingrese un numero: ");
  scanf("%d",&numero);
  printf("Ingrese hasta que valor quiere evaluar el numero %d: ",numero);
  scanf("%d",&valor_maximo);
  printf("MULTIPLOS: \n");
  
  while(i<=valor_maximo){
      
      multiplos=numero*i;
      printf("- %d -",multiplos);
      
      
      ++i;
  }
  
    return 0;
}
