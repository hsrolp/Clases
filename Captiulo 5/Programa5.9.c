#include <stdio.h>

const int MAX = 100;

void Lectura(int *, int);
int Busca(int *, int, int);

void main(void) {
    int RES, ELE, TAM, VEC[MAX];
    do {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > MAX || TAM < 1);   // Se verifica que el tamaño del arreglo sea correcto.

    Lectura(VEC, TAM);
    printf("\nIngrese el elemento a buscar: ");
    scanf("%d", &ELE);
    RES = Busca(VEC, TAM, ELE);   // Se llama a la función que busca en el arreglo.
    if (RES)
        printf("\nEl elemento se encuentra en la posición %d", RES);
    else
        printf("\nEl elemento no se encuentra en el arreglo");
}

void Lectura(int A[], int T) {
    int I;
    for (I = 0; I < T; I++) {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

int Busca(int A[], int T, int ELE) {
    int I;
    for (I = 0; I < T; I++)
        if (A[I] == ELE)
            return (I + 1);
    return 0;
}
