#include <stdio.h>

int main()
{
    int n_empleados,i,sueldo_mayor,sueldo_menor;
    float sueldo,gasto_empresa;
    i=1;
    gasto_empresa=0;
    
    
    printf("Numero de empleados: ");
    scanf("%d",&n_empleados);
    
    while(i<=n_empleados){
        
        printf("Sueldo de empleado %d \n",i);
        scanf("%f",&sueldo);
        gasto_empresa=gasto_empresa+sueldo;
        
        if(sueldo>=100 && sueldo<=300){
            
            ++sueldo_menor;
        
        }else if(sueldo>300){
            
            ++sueldo_mayor;
        }
        
        ++i;
    }
    
    printf("Numero de empleados con sueldo entre 100 y 300: %d \n",sueldo_menor);
    printf("Numero de empleados con sueldo mayor que 300: %d \n",sueldo_mayor);
    printf("El gasto total de la empresa en sueldos es de %.2f: ",gasto_empresa);
    
    
    

    return 0;
}
