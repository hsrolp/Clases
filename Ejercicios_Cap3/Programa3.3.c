#include <stdio.h>
/* Promedio de Calificaciones.
   El programa calcula el promedio de calificaciones de un grupo de 30 estudiantes.
   I: variable de tipo entero.
   CAL y SUM: variables de tipo real para la calificaci�n y la suma de calificaciones. */
void main(void)
{
    int I;  // Declaraci�n de la variable entera para el contador del ciclo.
    float CAL, SUM = 0, PROM;  // Declaraci�n de variables reales para la calificaci�n, suma y promedio.
    for (I = 1; I <= 30; I++)  // Ciclo que se ejecuta 30 veces, una para cada estudiante.
    {
        printf("Ingrese la calificaci�n del estudiante %d: ", I);  // Solicita la calificaci�n del estudiante I.
        scanf("%f", &CAL);  // Lee la calificaci�n ingresada y la almacena en la variable CAL.
        SUM += CAL;  // Suma la calificaci�n ingresada al total de calificaciones.
    }
    PROM = SUM / 30;  // Calcula el promedio de calificaciones.
    printf("El promedio de calificaciones es: %.2f\n", PROM);  // Imprime el promedio calculado.
}
