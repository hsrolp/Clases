#include <stdio.h>
/* Factorial.
   El programa calcula el factorial de un n�mero entero N.
   I: variable de tipo entero.
   N y FACT: variables de tipo entero para el n�mero y su factorial. */
void main(void)
{
    int I, N, FACT = 1;  // Declaraci�n e inicializaci�n de variables.
    printf("Ingrese un n�mero entero N: ");  // Solicita al usuario que ingrese un n�mero entero.
    scanf("%d", &N);  // Lee el n�mero ingresado y lo almacena en la variable N.
    for (I = 1; I <= N; I++)  // Ciclo que se ejecuta desde 1 hasta N.
        FACT *= I;  // Multiplica el valor de FACT por I.
    printf("El factorial de %d es: %d\n", N, FACT);  // Imprime el factorial calculado.
}
