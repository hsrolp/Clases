#include <stdio.h>
#include <math.h>


int main(void)      // Se inicia la función principal
{
    int NUM;  // Declaración de variable entera

    printf("Ingresa el numero para calcular la serie: ");  // Solicita al usuario ingresar un número
    scanf("%d", &NUM);  // Lee el valor ingresado por el usuario y lo almacena en NUM

    if (NUM > 0)  // Verifica si el número ingresado es positivo
    {
        printf("\nSerie de ULAM\n");  // Imprime el encabezado de la serie de ULAM
        printf("%d\t", NUM);  // Imprime el primer número de la serie

        while (NUM != 1)  // Bucle que se ejecuta mientras NUM no sea igual a 1
        {
            if (NUM % 2 == 0)  // Verifica si NUM es par
                NUM = NUM / 2;  // Si es par, divide NUM entre 2
            else  // Si NUM es impar
                NUM = NUM * 3 + 1;  // Multiplica NUM por 3 y le suma 1

            printf("%d\t", NUM);  // Imprime el valor actual de NUM
        }
    }
    else
        printf("\nNUM debe ser un entero positivo");  // Mensaje de error si NUM no es positivo

    return 0;  
}
