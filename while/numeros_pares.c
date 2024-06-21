/******************************************************************************
Desarrollar un programa que permita cargar n números enteros y luego nos informe
cuántos valores fueron pares y cuántos impares.
Emplear el operador “%” en la condición de la estructura condicional
(este operador retorna el resto de la división de dos valores, por ejemplo
11%2 retorna un 1):

	    if (valor%2==0)         //Si el if da verdadero luego es par.

*******************************************************************************/

#include <stdio.h>

int main()
{
  int numeros,n_numeros,pares,resto,impares,i;
  
  i=1;
  
  printf("Numero de valores a evaluar: ");
  scanf("%d",&n_numeros);
  
  while(i<=n_numeros){
      
      printf("Ingrese el %dº valor: ",i);
      scanf("%d",&numeros);
      
      resto=numeros%2;
      
      if(resto==0){
          pares++;
      }else{
          impares++;
      }
      
      ++i;
  }
  
  printf("Numeros pares: %d \n",pares);
  printf("Numeros impares: %d \n",impares);

    return 0;
}
