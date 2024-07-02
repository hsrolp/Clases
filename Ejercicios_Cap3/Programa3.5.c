#include <stdio.h>
#include <stdlib.h>
//Es un bucle que suma pagos hasta que se le diga para detenerse (0).
int main() //Se inicia la función
{

float PAG, SPA = 0; //Se definen las variables de tipo flotante PAG y SPA.
printf("Ingrese el primer pago:\t"); //Se manda a imprimir: "Ingrese el primer pago:".
scanf("%f", &PAG); //Se pide ingresar el monto a sumar antes de iniciar el bucle.
do //Se crea el bucle do while
{
SPA = SPA + PAG; //SPA será igual a SPA más PAG (Monto ingresado).
printf("Ingrese el siguiente pago -0 para terminar-: \t"); //Se pide al usuario ingresar el siguiente pago o poner "0" para terminar el bucle.
scanf("%f", &PAG); //Se pide ingresar el monto.
} while (PAG); //el bucle se repite mientras PAG no sea 0.
printf("\nEl total de pagos del mes es: %.2f", SPA);//Se imprime el total acumulado de pagos, con dos decimales

    return 0;
}
