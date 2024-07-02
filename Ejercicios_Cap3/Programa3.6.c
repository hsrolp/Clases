#include <stdio.h>
/* Serie de Fibonacci.
   El programa genera los primeros N t�rminos de la serie de Fibonacci.
   I: variable de tipo entero.
   N, A y B: variables de tipo entero para el n�mero de t�rminos y los t�rminos de la serie. */
void main(void)
{
    int I, N, A = 0, B = 1, TEMP;  // Declaraci�n e inicializaci�n de variables.
    printf("Ingrese un n�mero entero N: ");  // Solicita al usuario que ingrese un n�mero entero.
    scanf("%d", &N);  // Lee el n�mero ingresado y lo almacena en la variable N.
    printf("Los primeros %d t�rminos de la serie de Fibonacci son: ", N);  // Imprime el mensaje inicial.
    for (I = 1; I <= N; I++)  // Ciclo que se ejecuta desde 1 hasta N.
    {
        printf("%d ", A);  // Imprime el t�rmino A de la serie.
        TEMP = A + B;  // Calcula el siguiente t�rmino de la serie.
        A = B;  // Actualiza A al valor de B.
        B = TEMP;  // Actualiza B al valor del siguiente t�rmino.
    }
    printf("\n");  // Salto de l�nea final.
}
