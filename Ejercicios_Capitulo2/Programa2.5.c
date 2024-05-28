#include <stdio.h>
#include <math.h>

int main(void)
{
    int OP, T;/**Se declaran las variables OP & T de tipo entero*/
    float RES; /**Se declara la variable RES de tipo entero*/
    printf("Ingrese la opción del cálculo y el valor entero: ");
    scanf("%d %d", &OP, &T);

    switch(OP)
    {
    case 1: /**La variable ingresada por el usuario se divida entre 5*/
        RES = T / 5.0;
        break; /**break indica que el bloque de código se romple luego de seleccionar alguna opción y ingresar el dato*/
    case 2:/**La variable ingresada se eleva por si misma. Ej. 5^5*/
        RES = pow(T, T);
        break;
    case 3: /** multiplica el valor de la variable T por 6 y luego divide el resultado por 2. */
    case 4: /** multiplica el valor de la variable T por 6 y luego divide el resultado por 2. */
        RES = 6 * T / 2;
        break;
    default:
        RES = 1; /**Si no se selecciona ninguna opción valida por defecto se imprime 1 */
        break;
    }

    printf("\nResultado: %7.2f\n", RES); /**Se imprime el resultado. .2 indicando la cantidad de digitos a imprimir después del .*/

    return 0;
}
