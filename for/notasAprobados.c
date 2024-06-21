/*
Escribir un programa que lea 10 notas de alumnos y nos informe cuántos tienen notas mayores o iguales a 7 y cuántos menores.

Para resolver este problema se requieren tres contadores:
aprobados (Cuenta la cantidad de alumnos aprobados)
reprobados (Cuenta la cantidad de reprobados)
f (es el contador del for)
*/

#include <stdio.h>

int main(void){

    float nota;
    int i,aprobados,reprobados;

    aprobados=0;
    reprobados=0;

    for(i=1;i<=10;i++){

        printf("Nota numero %d: ",i);
        scanf("%f",&nota);

        if(nota>=7){
            aprobados++;
        }else if(nota<7){
            reprobados++;
        }

    }



    printf("Aprobados: %d \n",aprobados);
    printf("Reprobados: %d \n",reprobados);

return 0;
}
