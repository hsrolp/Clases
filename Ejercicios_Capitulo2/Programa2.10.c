#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(void)
{

    int NUM;/**Se declara la variable NUM de tipo entero*/
    printf("Ingrese el numero: "); /**Se le pide al usuario ingresar un n�mero*/
    scanf("%d", &NUM); /**Se introduce el dato*/
    if (NUM==0) /**Se  utiliza el condicional if indicando que si NUM==0 es NULO*/
        printf("\nNULO");
    else if (pow (-1, NUM)>0) /**Eval�a si el resultado de elevar -1 a la potencia NUM es mayor que cero*/
        printf("\nPar"); /**de ser as� es un n�mero par*/
    else /**de lo contrario es impar*/
        printf("\nImpar");

    return 0;
}
