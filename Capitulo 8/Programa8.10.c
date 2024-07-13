#include <stdio.h>
#include <string.h>

typedef struct 
{
    int clave;
    char descripcion[30];
    int cantidad;
    float precio_unitario;
} articulo;

void Lectura(articulo *, int);
void Imprime(articulo *, int);
void Mayores_500(articulo *, int);
void Actualiza(articulo *, int);
void Busca_e_Imprime(articulo *, int);

int main(void)
{
    articulo ARRE[100];
    int TAM, OPE;
    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM > 100 || TAM < 1);

    Lectura(ARRE, TAM);
    do
    {
        printf("\n\nMENU DE OPCIONES");
        printf("\n1.- Imprimir");
        printf("\n2.- Mayores a 500");
        printf("\n3.- Actualizar");
        printf("\n4.- Buscar e imprimir");
        printf("\n5.- Salir");
        printf("\n\nIngrese una opción: ");
        scanf("%d", &OPE);
        switch (OPE)
        {
            case 1: Imprime(ARRE, TAM);
                break;
            case 2: Mayores_500(ARRE, TAM);
                break;
            case 3: Actualiza(ARRE, TAM);
                break;
            case 4: Busca_e_Imprime(ARRE, TAM);
                break;
        }
    }
    while (OPE != 5);
}

void Lectura(articulo A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("\nIngrese la clave del articulo: ");
        scanf("%d", &A[I].clave);
        fflush(stdin);
        printf("Ingrese la descripcion del articulo: ");
        gets(A[I].descripcion);
        printf("Ingrese la cantidad de articulos: ");
        scanf("%d", &A[I].cantidad);
        printf("Ingrese el precio unitario del articulo: ");
        scanf("%f", &A[I].precio_unitario);
    }
}

void Imprime(articulo A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("\nClave: %d", A[I].clave);
        printf("\nDescripcion: %s", A[I].descripcion);
        printf("\nCantidad: %d", A[I].cantidad);
        printf("\nPrecio unitario: %.2f", A[I].precio_unitario);
        printf("\nImporte: %.2f\n", A[I].cantidad * A[I].precio_unitario);
    }
}

void Mayores_500(articulo A[], int T)
{
    int I;
    float IMPORTE;
    for (I=0; I<T; I++)
    {
        IMPORTE = A[I].cantidad * A[I].precio_unitario;
        if (IMPORTE > 500)
        {
            printf("\nClave: %d", A[I].clave);
            printf("\tDescripcion: %s", A[I].descripcion);
            printf("\tImporte: %.2f\n", IMPORTE);
        }
    }
}

void Actualiza(articulo A[], int T)
{
    int I, CLAVE;
    printf("\nIngrese la clave del articulo a actualizar: ");
    scanf("%d", &CLAVE);
    I=0;
    while (I<T && A[I].clave != CLAVE)
        I++;
    if (I == T)
        printf("\nLa clave del articulo no existe");
    else
    {
        printf("\nIngrese la nueva cantidad de articulos: ");
        scanf("%d", &A[I].cantidad);
        printf("Ingrese el nuevo precio unitario del articulo: ");
        scanf("%f", &A[I].precio_unitario);
    }
}

void Busca_e_Imprime(articulo A[], int T)
{
    int I, CLAVE;
    printf("\nIngrese la clave del articulo a buscar: ");
    scanf("%d", &CLAVE);
    I=0;
    while (I<T && A[I].clave != CLAVE)
        I++;
    if (I == T)
        printf("\nLa clave del articulo no existe");
    else
    {
        printf("\nClave: %d", A[I].clave);
        printf("\nDescripcion: %s", A[I].descripcion);
        printf("\nCantidad: %d", A[I].cantidad);
        printf("\nPrecio unitario: %.2f", A[I].precio_unitario);
        printf("\nImporte: %.2f\n", A[I].cantidad * A[I].precio_unitario);
    }
}
