#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**El programa, al recibir como datos tres valores enteros, establece si los
mismos satisfacen una expresión determinada*/

int main(void)
{

    float RES; /**Se declara la variable RES de tipo flotante*/
    int R, T, Q; /**Se declaran las variables R, T y Q de tipo entero*/
    printf("Ingrese los valores de R, T y Q: "); /**Se le pide al usuario ingresar los valores de R, T y Q*/
    scanf("%d %d %d", &R, &T, &Q); /**Se ingresan los datos de R, T y Q*/
    RES = pow(R, 4)- pow(T, 3) + 4 * pow(Q, 2);/**Se hace el cálculo de R^4 - T^3 + 4 * Q^2 y lo almacena en la variable "RES"*/
    if (RES < 820) /**Comprueba si el valor de RES es menor a 820*/
        printf("\nR = %d\tT = %d\t Q = %d", R, T, Q);/**Si la condición anterior es verdadera se imprimen los valores de R, T y Q en la consola*/


    return 0;
}
