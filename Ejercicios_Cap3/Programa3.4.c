#include <stdio.h>
/* Factorial.
   El programa calcula el factorial de un número entero N.
   I: variable de tipo entero.
   N y FACT: variables de tipo entero para el número y su factorial. */
void main(void)
{
    int I, N, FACT = 1;  // Declaración e inicialización de variables.
    printf("Ingrese un número entero N: ");  // Solicita al usuario que ingrese un número entero.
    scanf("%d", &N);  // Lee el número ingresado y lo almacena en la variable N.
    for (I = 1; I <= N; I++)  // Ciclo que se ejecuta desde 1 hasta N.
        FACT *= I;  // Multiplica el valor de FACT por I.
    printf("El factorial de %d es: %d\n", N, FACT);  // Imprime el factorial calculado.
}
