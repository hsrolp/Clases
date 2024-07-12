#include <stdio.h>
#define MAX 100
void Lectura(int *, int);
void Producto(int *, int *, int *, int);

int main(void) {
    int VEC1[MAX], VEC2[MAX], VEC3[MAX], TAM;
    do {
        printf("Ingrese el tamaño de los arreglos: ");
        scanf("%d", &TAM);
    } while (TAM > MAX || TAM < 1);
    printf("\nLectura del primer arreglo\n");
    Lectura(VEC1, TAM);
    printf("\nLectura del segundo arreglo\n");
    Lectura(VEC2, TAM);
    Producto(VEC1, VEC2, VEC3, TAM);
    return 0;
}

void Lectura(int A[], int T) {
    int I;
    for (I = 0; I < T; I++) {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

void Producto(int *X, int *Y, int *Z, int T) {
    int I;
    for (I = 0; I < T; I++)
        Z[I] = X[I] * Y[I];
}
