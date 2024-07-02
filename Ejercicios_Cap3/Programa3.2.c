#include <stdio.h>
/* Sumatoria.
   El programa, al recibir un n�mero natural N, calcula la suma de los primeros N n�meros naturales.
   I: variable de tipo entero.
   SUM: variable de tipo entero para almacenar la suma. */
void main(void)
{
    int I, N, SUM = 0;  // Declaraci�n e inicializaci�n de variables.
    printf("Ingrese un n�mero natural N: ");  // Solicita al usuario que ingrese un n�mero natural.
    scanf("%d", &N);  // Lee el n�mero ingresado y lo almacena en la variable N.
    for (I = 1; I <= N; I++)  // Ciclo que se ejecuta desde 1 hasta N.
        SUM += I;  // Suma el valor de I a SUM.
    printf("La suma de los primeros %d n�meros naturales es: %d\n", N, SUM);  // Imprime la suma calculada.
}
