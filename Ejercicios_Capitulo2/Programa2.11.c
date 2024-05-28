#include <stdio.h>
#include <stdlib.h>


/*** Billete de ferrocarril.
El programa calcula el costo de un billete de ferrocarril teniendo en
cuenta la distancia entre las dos ciudades y el tiempo de permanencia
del pasajero.*/


int main(void)
{

    int DIS, TIE;/**Se declaran las variables DIS y TIE de tipo entero*/
    float BIL; /**Se declara la variable BIL de tipo flotante*/
    printf("Ingrese la distancia entre ciudades y el tiempo d estancia: "); /**Se le pide ingresar los datos al usuario*/
    scanf("%d %d", &DIS, &TIE);/**Se ingresan los valores de DIS y TIE*/
    if ((DIS*2 > 500)&&(TIE>10)) /**Se evalua si el doble de la variable DIS es mayor que 500 y se utiliza el operador lógico && (y) para indicar que para que la condición sea verdadera ambas condiciones se deben cumplir*/
        BIL = DIS * 2 * 0.19 * 0.8;/**Almacena el resultado de DIS*2*0.19*0.8 en la variable BIL*/
    else
        BIL = DIS * 2 * 0.19;/**En caso de que lo anterior no se cumpla BIL se calcula como se establece aquí*/
    printf("\n\nCosto del billete: %.2f\n", BIL);4
    return 0;
}
