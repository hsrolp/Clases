#include <stdio.h> 


int main() // Función principal del programa.
{
    int I = 2, CAM = 1; // Se inicializan las variables enteras I (valor inicial de la serie) en 2 y CAM (controla la alternancia de la serie) en 1.
    long SSE = 0; // Se declara la variable SSE de tipo long, inicializada en 0, para almacenar la suma de la serie.

    while (I <= 2500) // Bucle while que se ejecuta mientras I sea menor o igual a 2500.
    {
        SSE = SSE + I; // Suma el valor de I a SSE y actualiza SSE.
        printf("\t %d", I); // Imprime el valor actual de I.

        if (CAM) // Condición que se ejecuta si CAM es distinto de 0 (verdadero).
        {
            I += 5; // Incrementa I en 5 si CAM es verdadero.
            CAM--; // Decrementa CAM en 1.
        }
        else // Si CAM es 0 (falso), ejecuta esta sección.
        {
            I += 3; // Incrementa I en 3 si CAM es falso.
            CAM++; // Incrementa CAM en 1.
        }
    }

    printf("\nLa suma de la serie es: %ld", SSE); // Imprime la suma total de la serie.
return 0;
}
