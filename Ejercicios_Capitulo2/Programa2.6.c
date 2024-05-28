#include <stdio.h>
#include <stdlib.h>
/** Incremento de salario.
El programa, al recibir como dato el nivel de un profesor, incrementa su
➥salario en función de la tabla 2.3.*/
int main(void)
{

    float SAL; /**Se declara la variable tipo flotante SAL*/
    int NIV; /**Se declara la variable de tipo entero NIV*/
    printf("Ingrese el nivel academico del profesor: "); /**Se le pide ingresar el nivel academico del profesor*/
    scanf("%d", &NIV); /**Se ingresa el dato de tipo entero*/
    printf("Ingrese el salario: ");/**Se le pide que asigne un valor a la variable SAL*/
    scanf("%f", &SAL);/**Se le asigna un valor a la variable SAL*/
    switch(NIV) /**Se crea el Switch */
    {
    case 1: /**Se multiplica el valor ingresado por 1.0035*/
        SAL = SAL * 1.0035;
        break;
    case 2:/**Se multiplica el valor ingresado por 1.0041*/
        SAL = SAL * 1.0041;
        break;
    case 3: /**Se multiplica el valor ingresado por 1.0048*/
        SAL = SAL * 1.0048;
        break;
    case 4: /**Se multiplica el valor ingresado por 1.0053*/
        SAL = SAL * 1.0053;
        break;
        {
            printf("\n\nNivel: %d \tNuevo salario: %8.2", NIV, SAL); /**Se imprime el salario incrementado*/
        }
    }
    return 0;
}
