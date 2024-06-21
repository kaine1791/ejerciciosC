/*
Desarrollar un programa que permita la carga de 10 valores por teclado y nos muestre posteriormente
la suma de los valores ingresados y su promedio. Este problema ya lo desarrollamos empleando el while,
lo resolveremos empleando la estructura for.
*/

#include <stdio.h>

int main(void){

    int i;
    float valor,promedio,acumulador;

    acumulador=0;

    for(i=1;i<=10;i++){

        printf("Ingresar el %d valor: ",i);
        scanf("%f",&valor);
        acumulador=acumulador+valor;

    }

    promedio=acumulador/10;


    printf("El promedio es: %.2f: ",promedio);

    return 0;
}
