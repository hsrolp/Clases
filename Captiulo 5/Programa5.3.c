#include <stdio.h>
void Lectura(int *, int); 
void Imprime(int *, int); 
void Elimina(int *, int *);

int main(void) {
    int TAM, ARRE[100];
    do {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > 100 || TAM < 1);
    Lectura(ARRE, TAM);
    Elimina(ARRE, &TAM);
    Imprime(ARRE, TAM);
    return 0;
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
        printf("\nA[%d]: %d", I + 1, A[I]);
}

void Elimina(int A[], int *T) {
    int I, J, K;
    for (I = 0; I < *T - 1; I++) {
        for (J = I + 1; J < *T; J++) {
            if (A[I] == A[J]) {
                for (K = J; K < *T - 1; K++)
                    A[K] = A[K + 1];
                (*T)--;
                J--;
            }
        }
    }
}
