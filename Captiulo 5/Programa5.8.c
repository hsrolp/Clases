#include <stdio.h>

const int MAX = 100;

void Lectura(int *, int);
void Imprime(int *, int);
void Ordena(int *, int);

void main(void) {
    int TAM, VEC[MAX];
    do {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > MAX || TAM < 1);   // Se verifica que el tamaño del arreglo sea correcto.

    Lectura(VEC, TAM);
    Ordena(VEC, TAM);
    Imprime(VEC, TAM);
}

void Lectura(int A[], int T) {
    int I;
    for (I = 0; I < T; I++) {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

void Imprime(int A[], int T) {
    int I;
    for (I = 0; I < T; I++)
        printf("\nA[%d]: %d", I, A[I]);
}

void Ordena(int A[], int T) {
    int MEN, I, J, K;
    for (I = 0; I < T - 1; I++) {
        MEN = I;
        for (J = I + 1; J < T; J++)
            if (A[J] < A[MEN])
                MEN = J;
        K = A[MEN];
        A[MEN] = A[I];
        A[I] = K;
    }
}
