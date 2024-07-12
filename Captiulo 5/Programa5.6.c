#include <stdio.h>
#define MAX 100
void Lectura(int *, int);
int Ordena(int *, int);

int main(void) {
    int VEC[MAX], TAM, BAND;
    do {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > MAX || TAM < 1);
    Lectura(VEC, TAM);
    BAND = Ordena(VEC, TAM);
    if (BAND)
        printf("\nEl arreglo está ordenado en forma ascendente");
    else
        printf("\nEl arreglo no está ordenado en forma ascendente");
    return 0;
}

void Lectura(int A[], int T) {
    int I;
    for (I = 0; I < T; I++) {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

int Ordena(int A[], int T) {
    int I;
    for (I = 0; I < T - 1; I++) {
        if (A[I] > A[I + 1])
            return 0;
    }
    return 1;
}
