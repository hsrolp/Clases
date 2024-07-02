#include <stdio.h>  



int main(void)  // Función principal del programa con int como tipo de retorno
{
    int N, i;     // Declaración de variables para almacenar la cantidad de números y el índice del bucle
    int num[100]; // Declaración de un arreglo para almacenar hasta 100 números enteros

    printf("Ingrese la cantidad de numeros que desea ingresar (hasta 100): ");  // Solicita al usuario ingresar la cantidad de números
    scanf("%d", &N);  // Lee el valor ingresado por el usuario y lo almacena en N

    if (N > 0 && N <= 100)  // Verifica si el valor de N es positivo y no excede el tamaño del arreglo
    {
        // Bucle para leer N números enteros del usuario
        for (i = 0; i < N; i++)  // Se ejecuta N veces, de 0 a N-1
        {
            printf("Ingrese el numero %d: ", i + 1);  // Solicita al usuario ingresar el número en la posición i+1
            scanf("%d", &num[i]);  // Lee el número ingresado por el usuario y lo almacena en el arreglo en la posición i
        }

        printf("\nLos numeros en orden inverso son:\n");  // Imprime un mensaje indicando que se mostrarán los números en orden inverso

        // Bucle para imprimir los números en orden inverso
        for (i = N - 1; i >= 0; i--)  // Se ejecuta desde N-1 hasta 0, en orden inverso
        {
            printf("%d\n", num[i]);  // Imprime el número en la posición i del arreglo
        }
    }
    else  // Si el valor de N no es válido
    {
        printf("La cantidad de numeros debe ser entre 1 y 100.\n");  // Imprime un mensaje de error indicando que el valor de N es inválido
    }

    return 0; 
}
