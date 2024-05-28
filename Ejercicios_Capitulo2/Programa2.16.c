#include <stdio.h>
#include <stdlib.h>

/*** Empresa textil.
El programa, al recibir como datos decisivos la categoría y antigüedad de
un empleado, determina si el mismo reúne las condiciones establecidas por
la empresa para ocupar un nuevo cargo en una sucursal. */


void main(void)
{


    int CLA, CAT, ANT, RES; //Se crean las variables CLA, CAT, ANT, RES de tipo entero
    printf("\nIngrese la clave, categoria y antiguedad del trabajador: ");//Se pide ingresar la clave y antiguedad del trabajador
    scanf("%d %d %d", &CLA, &CAT, &ANT);//Se ingresan los datos
    switch(CAT) //Se crea un Switch para CAT(categoria)
    {
    case 3: //Caso 3. ()
    case 4://Caso 4. Se utiliza el condicional if. Si ANT >=5 entonces el resultado es 1, por lo tanto el trabajador reune las condiciones para el puesto.
        if (ANT>=5)
            RES = 1;
        else //Sino...
            RES = 0; //El trabajador no reune las condiciones
        break;
    case 2: //Caso 2. Si ANT>=7 entonces RES=1
        if (ANT>=7)
            RES = 1;
        else //Sino...
            RES = 0;
        break;
    default: //Por default RES = 0
        RES = 0;
        break;

    }
    if (RES) //Se crea el condicional if, si RES = 1 se imprime el msj más clasificación
        printf("\nEl trabajador con la clave % reune las condiciones para el puesto", CLA);
    else //Sino... RES = 0 se imprime el msj más clasificación
        printf("\nEl trabajador con la clave %d no reune las condiciones para el puesto", CLA);
    return 0;
}
