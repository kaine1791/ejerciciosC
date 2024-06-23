/******************************************************************************
Realizar un programa que lea los lados de n triángulos, e informar:
a) De cada uno de ellos, qué tipo de triángulo es: equilátero (tres lados iguales),
isósceles (dos lados iguales), o escaleno (ningún lado igual)
b) Cantidad de triángulos de cada tipo.
c) Tipo de triángulo que posee menor cantidad.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int n_triangulos,i,j,lado;
   
   
   int n_lados[2];
   
   
   printf("Introduzca numero triangulos que desea analizar: ");
   scanf("%d",&n_triangulos);
   
   for(i=0;i<3;++i){
       printf("%d lado: ",i+1);
       scanf("%d",&n_lados[i]);
   }
   
   for(i=0;i<3;++i){
       printf("%d triangulo \n",i+1);
       printf("Lado %d: %d \n",i+1,n_lados[i]);
   }
 
   
 
   

    return 0;
}
