#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    float PRE, NPR; /*Se definen las variables PRE y NPR*/
    printf("Ingrese el precio del producto: "); /*Se le pide ingresar el dato al usuario*/
    scanf("%f", &PRE); /*Se toma el dato del usuario*/
    if ("PRE > 1500") /*Se inicia una condición if indiciando que si PRE es mayor a 1,500 se ejecuta la linea de comando que le prosigue*/
{
    NPR = PRE * 1.11; /*Se multiplica el valor dado por el usuario por 1.11 y*/
    printf("\nNuevo precio: %7.2f", NPR);/*Se imprime el precio ya ajustado*/
}

    return 0;
}
/* El programa al recibir como dato el precio de un producto
 incrementa 11% el mismo si este es menor a 1,500.*/
