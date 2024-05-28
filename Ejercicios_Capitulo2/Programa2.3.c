#include <stdio.h>
#include <stdlib.h>

void main(void)
{

    float PRO;                                      /*Se declara la variable de tipo flotante PRO*/
    printf("Ingrese el promedio del alumno: ");     /*Se imprime el mensaje pidiendo al usuario ingresar el dato*/
    scanf("%f", &PRO);                              /*Se recibe el dato*/
    if (PRO >= 6.0)                                 /*Se crea el condicional if, indicando que si es mayor o igual a 6.0 el alumno es aprobado*/
        printf("\nAprobado");
    else                                            /*Se utiliza el else por si no se cumple lo de arriba se imprime el mensaje Reprobado*/
        printf("\nReprobado");

    return 0;
}
