/******************************************************************************
Confeccionar un programa que lea n pares de datos, cada par de datos corresponde
a la medida de la base y la altura de un triángulo. El programa deberá informar:

a) De cada triángulo la medida de su base, su altura y su superficie.

b) La cantidad de triángulos cuya superficie es mayor a 12.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n_par,i,triangulo_mayor;
    float base,altura,superficie;
    
    triangulo_mayor=0;
    
    printf("Numero de pares de datos: ");
    scanf("%d",&n_par);
    
    for(i=1;i<=n_par;++i){
        
        
        
        printf("Base del triangulo %d: ",i);
        scanf("%f",&base);
        printf("Altura del triangulo %d: ",i);
        scanf("%f",&altura);
        superficie=(base*altura)/2;
        
        
        printf("Base del triangulo %d: %.2f \n",i,base);
        printf("Altura del triangulo %d: %.2f \n",i,altura);
        printf("superficie del triangulo %d: %.2f \n",i,superficie);
        
        
        
        if(superficie>12){
            triangulo_mayor++;
            
        }
        
        
    }
    
    printf("superficie mayores que 12: %d \n",triangulo_mayor);
    
   

    return 0;
}
