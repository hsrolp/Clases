#include <stdio.h>
#define TAM 50
void Lectura(int *, int);
void Frecuencia(int *, int, int *, int);
void Impresion(int *, int);
void Mayor(int *, int);

int main(void) {
    int CAL[TAM], FRE[6] = {0};
    Lectura(CAL, TAM);
    Frecuencia(CAL, TAM, FRE, 6);
    printf("\nFrecuencia de Calificaciones\n");
    Impresion(FRE, 6);
    Mayor(FRE, 6);
    return 0;
}

void Lectura(int VEC[], int T) {
    int I;
    for (I = 0; I < T; I++) {
        printf("Ingrese la calificación -0:5- del alumno %d: ", I + 1);
        scanf("%d", &VEC[I]);
    }
}

void Frecuencia(int VEC[], int T, int FREC[], int N) {
    int I;
    for (I = 0; I < T; I++)
        FREC[VEC[I]]++;
}

void Impresion(int FREC[], int N) {
    int I;
    for (I = 0; I < N; I++)
        printf("\n%d: %d", I, FREC[I]);
}

void Mayor(int FREC[], int N) {
    int I, MAY = FREC[0], CALIF = 0;
    for (I = 1; I < N; I++) {
        if (FREC[I] > MAY) {
            MAY = FREC[I];
            CALIF = I;
        }
    }
    printf("\n\nLa frecuencia mayor es %d y se repite %d veces", CALIF, MAY);
}
