#include <stdio.h>
void Lectura(int *, int); 
int Suma(int *, int);

int main(void) {
    int TAM, ARRE[100];
    do {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > 100 || TAM < 1);
    Lectura(ARRE, TAM);
    printf("\nSuma del arreglo: %d", Suma(ARRE, TAM));
    return 0;
}

void Lectura(int A[], int T) {
    int I;
    for (I = 0; I < T; I++) {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

int Suma(int A[], int T) {
    int I, SUM = 0;
    for (I = 0; I < T; I++)
        SUM += A[I];
    return (SUM);
}
