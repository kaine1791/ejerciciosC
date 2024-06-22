/******************************************************************************
Se desea guardar los sueldos de 5 operarios.
Según lo conocido deberíamos definir 5 variables
si queremos tener en un cierto momento los 5 sueldos
almacenados en memoria.
Empleando un vector solo se requiere definir un único nombre y accedemos
a cada elemento por medio del subíndice.
*******************************************************************************/

#include <stdio.h>

int main()
{
  int sueldos[4];
  int i,j;
  
  
  for(i=0;i<=4;++i){
      
      printf("Sueldo del %d empleado: ",i+1);
      scanf("%d",&sueldos[i]);
  }
  
  for(j=0;j<=4;++j){
      printf("El sueldo del %d empleado es: %d \n",j+1,sueldos[j]);
      
  }
   

    return 0;
}
