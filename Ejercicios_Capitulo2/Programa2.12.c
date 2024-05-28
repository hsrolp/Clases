#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**El programa comprueba la igualdad de valores asignados a las variables T, P, N*/
int main(void)
{
    double T, P, N; //Se definen las variables T, P, N
    printf("Ingrese los valores de T, P y N: ");// Se pide ingresar los valores a las variables
    scanf("%f %f %f", &T, &P, &N);//Se ingresan los valores

    if (P != 0)//Se inicia la condicional if
    {

        double T_d = (double) T;//Convierte T a un número de punto flotante y lo almacena en T_d.
        double P_d = (double) P;//Convierte P a un número de punto flotante y lo almacena en P_d.

        double left_side = pow(T_d / P_d, N);//hace el calculo y lo almacena el resultado en left_side
        double right_side = pow(T_d, N) / pow(P_d, N);//hace el calculo y lo almacena el resultado en left_side

        double tolerance = 1e-6;/**Define una pequeña tolerancia (1e-6) para comparar los valores de punto flotante.
        if (fabs(left_side - right_side) < tolerance)//Usa fabs para obtener el valor absoluto
            de la diferencia entre left_side y right_side. Si esta diferencia es menor que la tolerancia,
             se considera que los valores son aproximadamente iguales.*/
            printf("\nSe comprueba la igualdad");// se imprime el msj
        else
            printf("\nNo se comprueba la igualdad");// se imprime el msj
    }
    else
    {
        printf("\nP tiene que ser diferente de 0");//SE IMPRIME EL MSJ
    }

    return 0;
}
//PAPA DIO, SALVAMEEE
