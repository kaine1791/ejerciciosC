/*

Escribir un programa que lea 10 números enteros y luego muestre cuántos valores ingresados fueron múltiplos de 3
 y cuántos de 5. Debemos tener en cuenta que hay números que son múltiplos de 3 y de 5 a la vez.
*/

#include <stdio.h>

int main(void){

    int valor,i,resto_tres,resto_cinco,m_tres,m_cinco;

    resto_tres=0;
    m_cinco=0;

    for(i=1;i<=10;++i){

        printf("Ingrese el valor %d: ",i);
        scanf("%d",&valor);

        resto_tres=valor%3;
        resto_cinco=valor%5;


        if(resto_tres==0 && resto_cinco==0){
            m_tres++;
            m_cinco++;
        }else if(resto_tres==0){

            m_tres++;
        }else if(resto_cinco==0){

            m_cinco++;

        }
    }

    printf("Multiplos de tres: %d \n",m_tres);
    printf("Multiplos de cinco: %d \n",m_cinco);



    return 0;
}
