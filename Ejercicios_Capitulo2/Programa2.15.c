#include <stdio.h>
#include <stdlib.h>

int main(void)
{

int TRA, EDA, DIA; //Se definen las variables TRA, EDA, DIA de tipo entero
float COS; //Se define la variable COS de tipo flotante
printf("Ingrese el tipo de dato de tratamiento, edad y dias: "); //Se le pide ingresar los tipos de dato
scanf("%d %d %d", &TRA, &EDA, &DIA); //Se ingresan los tipos de datos
switch(TRA) //Se crea un Switch de 4 casos
{
    case 1: COS = DIA * 2800; break;//Caso 1. COS = DIA multiplicado por 2800
    case 2: COS = DIA * 1950; break;//Caso 2. COS = DIA multiplicado por 1950
    case 3: COS = DIA * 2500; break;//Caso 3. COS = DIA multiplicado por 2500
    case 4: COS = -1; break; //Caso 4. COS = -1

}
if (COS != -1)//Se crea el condicional if
{
    if (EDA >= 60)//Si edad = o mayor a 60 entonces COS = COS muultiplicado por 0.75
        COS = COS * 0.75;
    else //Sino...
        if (EDAD <= 25)//Si edad <=25 COS = COS multiplicado por 0.85
        COS = COS * 0.85;
    printf("\nClave tratamiento: %d\t Dias: %d\t Costo total: %8.2f", TRA, DIA, COS);//Se imprime el msj junto con su respectiva varibale

}
else//Sino...
    printf("\nLa Clave del tratamiento es incorrecta");//Se imprime que la clave es incorrecta
    return 0;
}
