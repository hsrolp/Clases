#include <stdio.h>
#include <stdlib.h>


/**El programa al recibir 3 informes de ventas representados como P, S, R, los ordena de mayor a menor.*/


int main(void)
{

    float P, S, R; /**Se declaran las variables P, S y R*/
    printf("\nIngrese las ventas de los tres vendedores: ");/**Se le pide al usuario ingresar las ventas*/
    scanf("%f %f %f", &P, &S, &R); /**Se toman los datos*/
    if (P>S) /**Se utilza el condicional if, si P es > que S y R, y S es > que R entonces 1=P, 2=S, 3=R*/
        if(P>R)/**Si P es mayor que S, se comprueba si P también es mayor que R.*/
            if(S>R)/**Si P es mayor que R, se comprueba si S es mayor que R.*/
                printf("\n\n El orden es P, S y R: %8.2 %8.2f %8.2f", P, S, R); /**Si lo anterior se cumple se imprime en el orden dado P, S y R*/
            else
                printf("\n\n El orden es P, S y R: %8.2f %8.2f %8.2f", P, R, S); /**Si S no es mayor que R, imprime P, R y S en ese orden.*/
                else
                    printf("\n\n El orden es R, P y S: %8.2f %8.2f %8.2f", R, P, S);/**Si P no es mayor que R, imprime R, P y S en ese orden.*/
    else if (S > R)/**Si P no es mayor que S, se comprueba si S es mayor que R*/
           if (P > R)/**Si S es mayor que R, se comprueba si P es mayor que R.*/
            printf("\n\n El orden es S, P y R: %8.2f %8.2f %8.2f", S, P, R);/**Si P es mayor que R, imprime S, P y R en ese orden.*/
        else
            printf("\n\n El orden es S, R y P: %8.2f %8.2f %8.2f", S, R, P);/**Si P no es mayor que R, imprime S, R y P en ese orden.*/
    else
        printf("\n\n El orden es R, S y P: %8.2f %8.2f %8.2f", R, S, P);/**Si S no es mayor que R, imprime R, S y P en ese orden.*/


    return 0;
}
