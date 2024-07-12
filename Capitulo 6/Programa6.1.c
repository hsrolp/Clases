#include <stdio.h>

void main(void)
{
    int A[10][10], B[10][10], C[10][10]; /* Declaración de los arreglos bidimensionales. */
    int I, J;

    /* Lectura del arreglo A. */
    for (I = 0; I < 10; I++)
        for (J = 0; J < 10; J++)
            scanf("%d", &A[I][J]);

    /* Lectura del arreglo B. */
    for (I = 0; I < 10; I++)
        for (J = 0; J < 10; J++)
            scanf("%d", &B[I][J]);

    /* Suma de los arreglos A y B, resultado se almacena en el arreglo C. */
    for (I = 0; I < 10; I++)
        for (J = 0; J < 10; J++)
            C[I][J] = A[I][J] + B[I][J];

    /* Escritura del arreglo C. */
    for (I = 0; I < 10; I++)
    {
        for (J = 0; J < 10; J++)
            printf("%d ", C[I][J]);
        printf("\n");
    }
}
