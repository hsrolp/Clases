#include <stdio.h>  
#include <math.h>    

int main(void)   // Definición de la función principal del programa
{
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0;  // Declaración de variables y su inicialización

    printf("Ingrese el numero de datos que se van a procesar:\t");  // Solicita al usuario la cantidad de números a procesar
    scanf("%d", &N);  // Lee el valor ingresado por el usuario y lo almacena en N

    if (N > 0)  // Verifica si el número de datos es positivo
    {
        for (I = 1; I <= N; I++)  // Bucle que se ejecuta N veces
        {
            printf("\nIngrese el numero %d: ", I);  // Solicita al usuario ingresar el número I
            scanf("%d", &NUM);  // Lee el valor ingresado por el usuario y lo almacena en NUM

            if (NUM % 2 == 0)  // Verifica si el número es par
                SPA = SPA + NUM;  // Suma el numero par a SPA
            else  // Si el numero es impar
            {
                SIM = SIM + NUM;  // Suma el numero impar a SIM
                CIM++;  // Incrementa el contador de números impares
            }
        }

        printf("\nLa suma de los numeros pares es: %d", SPA);  // Imprime la suma de los números pares
        if (CIM > 0)  // Verifica si hay al menos un número impar
            printf("\nEl promedio de numeros impares es: %.2f", (float)SIM / CIM);  // Calcula e imprime el promedio de los números impares
    }
    else
        printf("\nEl valor de N es incorrecto");  // Mensaje de error si N no es positivo
return 0;
}
