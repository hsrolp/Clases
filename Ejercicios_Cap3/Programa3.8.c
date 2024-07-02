#include <stdio.h> 



void main(void) // Función principal del programa. No retorna valor.
{
    int I, NUM; // Declaración de las variables enteras I (contador) y NUM (número cuyo factorial se calculará).
    long FAC; // Declaración de la variable de tipo long FAC, que almacenará el factorial.

    // Solicita al usuario ingresar un número entero.
    printf("\nIngrese el número: ");
    // Lee el número ingresado por el usuario y lo almacena en NUM.
    scanf("%d", &NUM); 

    // Comprueba si el número ingresado es mayor o igual a 0.
    if (NUM >= 0) 
    {
        FAC = 1; // Inicializa FAC en 1, ya que el factorial de 0 es 1, y es la base de la multiplicación.

        // Bucle que calcula el factorial multiplicando FAC por cada valor de I desde 1 hasta NUM.
        for (I = 1; I <= NUM; I++) 
        {
            FAC *= I; // Multiplica FAC por I y actualiza FAC con el resultado.
        }

        // Imprime el resultado del factorial de NUM.
        printf("\nEl factorial de %d es: %ld", NUM, FAC);
    }
    else // Si el número ingresado es negativo, se muestra un mensaje de error.
    {
        printf("\nError en el dato ingresado"); // Mensaje de error.
    }
return 0;
}
