#include <stdio.h>

int main()
{
   float sueldo[5];
   int i;
   
   for(i=0;i<=4;++i){
       printf("Introduzca el %d sueldo: ",i+1);
       scanf("%f",&sueldo[i]);
   }
   
   printf("\n");
   
   for(i=0;i<=4;++i){
       printf("El sueldo del %d trabajador es: %.2f \n",i+1,sueldo[i]);
   }

    return 0;
}
