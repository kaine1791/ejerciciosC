/******************************************************************************
En una empresa trabajan n empleados cuyos sueldos oscilan entre $100 y $500,
realizar un programa que lea los sueldos que cobra cada empleado e informe
cuántos empleados cobran entre $100 y $300 y cuántos cobran más de $300.
Además el programa deberá informar el importe que gasta la empresa en sueldos al personal.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n_empleados,i,sueldo_mayor,sueldo_menor;
    float sueldo,sueldos_totales;
    
    i=1;
    sueldos_totales=0;
    
    printf("Numero de empleados: ");
    scanf("%d",&n_empleados);
    
    while(i<=n_empleados){
        
        printf("Sueldo del %dº empleado: ",i);
        scanf("%f",&sueldo);
        
        if(sueldo>=100 && sueldo<=300){
            sueldo_menor++;
        }else if(sueldo>300){
            sueldo_mayor++;
        }
        
        sueldos_totales=sueldos_totales+sueldo;
        i++;
    }
    
    printf("Numero de empleados que cobran sueldos entre 100$ y 300$: %d \n",sueldo_menor);
    printf("Numero de empleados que cobran mas de 300$: %d \n",sueldo_mayor);
    printf("El gasto total de la empresa en sueldos es de: %2.f$ \n",sueldos_totales);
  
    return 0;
}
