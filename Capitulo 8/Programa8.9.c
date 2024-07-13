#include <stdio.h>
#include <string.h>

typedef struct {
    char nombre[20];
    int matricula;
    float calif[4];
} alumno;

void Lectura(alumno *, int);
void Imprime(alumno *, int);
void Promedios(alumno *, int);
void Imprime_Reprobados(alumno *, int);
void Mayor_Calif_Tercera_Materia(alumno *, int);
void Promedio_General_Cuarta_Materia(alumno *, int);

int main(void) {
    alumno GRUPO[50];
    int TAM;

    do {
        printf("Ingrese el tamaño del grupo: ");
        scanf("%d", &TAM);
    } while (TAM > 50 || TAM < 1);

    Lectura(GRUPO, TAM);
    Imprime(GRUPO, TAM);
    Promedios(GRUPO, TAM);
    Imprime_Reprobados(GRUPO, TAM);
    Mayor_Calif_Tercera_Materia(GRUPO, TAM);
    Promedio_General_Cuarta_Materia(GRUPO, TAM);
}

void Lectura(alumno A[], int T) {
    int I;
    for (I=0; I<T; I++) {
        fflush(stdin);
        printf("\nIngrese nombre del alumno: ");
        gets(A[I].nombre);
        printf("Matricula: ");
        scanf("%d", &A[I].matricula);
        for (int J=0; J<4; J++) {
            printf("Ingrese calificacion %d: ", J+1);
            scanf("%f", &A[I].calif[J]);
        }
    }
}

void Imprime(alumno A[], int T) {
    int I;
    for (I=0; I<T; I++) {
        printf("\nAlumno: %s", A[I].nombre);
        printf("\tMatricula: %d", A[I].matricula);
        for (int J=0; J<4; J++) {
            printf("\n\tCalificacion %d: %.2f", J+1, A[I].calif[J]);
        }
        printf("\n");
    }
}

void Promedios(alumno A[], int T) {
    int I, J;
    float SUM, PROM;
    for (I=0; I<T; I++) {
        SUM = 0.0;
        for (J=0; J<4; J++) {
            SUM += A[I].calif[J];
        }
        PROM = SUM / 4;
        printf("\nMatricula: %d \tPromedio: %.2f", A[I].matricula, PROM);
    }
}

void Imprime_Reprobados(alumno A[], int T) {
    int I, J;
    for (I=0; I<T; I++) {
        for (J=0; J<4; J++) {
            if (A[I].calif[J] < 6) {
                printf("\nAlumno: %s \tMatricula: %d", A[I].nombre, A[I].matricula);
                break; 
            }
        }
    }
}

void Mayor_Calif_Tercera_Materia(alumno A[], int T) {
    int I;
    float MAYOR = A[0].calif[2]; 
    for (I=1; I<T; I++) {
        if (A[I].calif[2] > MAYOR) {
            MAYOR = A[I].calif[2];
        }
    }
    printf("\nMayor calificacion en la tercera materia: %.2f", MAYOR);
}

void Promedio_General_Cuarta_Materia(alumno A[], int T) {
    int I;
    float SUM = 0.0;
    for (I=0; I<T; I++) {
        SUM += A[I].calif[3]; 
    }
    float PROM = SUM / T;
    printf("\nPromedio general de la cuarta materia: %.2f", PROM);
}
