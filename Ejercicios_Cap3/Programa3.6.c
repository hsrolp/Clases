#include <stdio.h>
/* Serie de Fibonacci.
   El programa genera los primeros N términos de la serie de Fibonacci.
   I: variable de tipo entero.
   N, A y B: variables de tipo entero para el número de términos y los términos de la serie. */
void main(void)
{
    int I, N, A = 0, B = 1, TEMP;  // Declaración e inicialización de variables.
    printf("Ingrese un número entero N: ");  // Solicita al usuario que ingrese un número entero.
    scanf("%d", &N);  // Lee el número ingresado y lo almacena en la variable N.
    printf("Los primeros %d términos de la serie de Fibonacci son: ", N);  // Imprime el mensaje inicial.
    for (I = 1; I <= N; I++)  // Ciclo que se ejecuta desde 1 hasta N.
    {
        printf("%d ", A);  // Imprime el término A de la serie.
        TEMP = A + B;  // Calcula el siguiente término de la serie.
        A = B;  // Actualiza A al valor de B.
        B = TEMP;  // Actualiza B al valor del siguiente término.
    }
    printf("\n");  // Salto de línea final.
}
