#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**El programa, al recibir como dato un valor entero, calcula el resultado de
una función.*/
void main(void)
{
    float X; //Se crea la variable X de tipo flotante
    int Y;//Se crea la variable Y de tipo entero
    printf("Ingrese el valor de Y: ");//Se pide ingresar el valor de Y
    scanf("%d", &Y);//Se ingresa el valor de Y
    if (Y < 0 || Y > 50) //Se crea el condicional if
        X = 0; //Si lo de arriba se cumple X=0
    else if (Y <= 10) //Sino se pregunta si Y<=10
        X = 4 / Y - Y;//Si lo anterior se cumple se ejecuta esta linea, sino...
    else if (Y <= 25)//Si Y<=25...
        X = pow(Y, 3) - 12;//Se ejecuta
    else//Sino...
        X = pow(Y, 2) + pow(Y, 3) - 18;//Se ejecuta
    printf("\n\nY = %d\tX = %8.2f", Y, X);//Se imprime Y & X con el mensaje X = , Y =

    return 0;
}
