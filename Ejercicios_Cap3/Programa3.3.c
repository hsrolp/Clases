#include <stdio.h>
/* Promedio de Calificaciones.
   El programa calcula el promedio de calificaciones de un grupo de 30 estudiantes.
   I: variable de tipo entero.
   CAL y SUM: variables de tipo real para la calificación y la suma de calificaciones. */
void main(void)
{
    int I;  // Declaración de la variable entera para el contador del ciclo.
    float CAL, SUM = 0, PROM;  // Declaración de variables reales para la calificación, suma y promedio.
    for (I = 1; I <= 30; I++)  // Ciclo que se ejecuta 30 veces, una para cada estudiante.
    {
        printf("Ingrese la calificación del estudiante %d: ", I);  // Solicita la calificación del estudiante I.
        scanf("%f", &CAL);  // Lee la calificación ingresada y la almacena en la variable CAL.
        SUM += CAL;  // Suma la calificación ingresada al total de calificaciones.
    }
    PROM = SUM / 30;  // Calcula el promedio de calificaciones.
    printf("El promedio de calificaciones es: %.2f\n", PROM);  // Imprime el promedio calculado.
}
