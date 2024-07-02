

#include <stdio.h> 

int main() // Se inicia la función principal del programa.
{
    int I, N; // Se declaran las variables enteras I (contador) y N (número de lanzamientos).
    float LAN, SLA = 0; // Se declaran las variables LAN (lanzamiento actual) y SLA (suma de lanzamientos), esta última inicializada en 0.

    do // Inicia un bucle do-while para obtener un número válido de lanzamientos.
    {
        printf("Ingrese el numero de lanzamientos: \t"); // Solicita al usuario el número de lanzamientos.
        scanf("%d", &N); // Lee el número de lanzamientos ingresado por el usuario.
    } while (N < 1 || N > 11); // Repite el bucle si N no está en el rango de 1 a 11.

    for (I = 1; I <= N; I++) // Inicia un bucle for que se ejecuta N veces.
    {
        printf("\nIngrese el lanzamiento %d: ", I); // Solicita al usuario ingresar el lanzamiento I.
        scanf("%f", &LAN); // Lee el valor del lanzamiento actual.
        SLA = SLA + LAN; // Suma el valor del lanzamiento actual a la suma total de lanzamientos.
    }

    SLA = SLA / N; // Calcula el promedio de los lanzamientos dividiendo la suma total por N.
    printf("\nEl promedio de lanzamientos es: %.2f", SLA); // Imprime el promedio de los lanzamientos con dos decimales.

    return 0; 
}
