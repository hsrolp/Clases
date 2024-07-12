#include <stdio.h>

void main(void)
{
    int MAT[5][6] = {{8, 3, 9, 7, 2, 4},
                     {6, 3, 8, 1, 5, 3},
                     {7, 8, 4, 6, 2, 3},
                     {3, 2, 1, 5, 7, 8},
                     {8, 4, 7, 2, 3, 6}};
    int I, J, SUM = 0;

    for (I = 0; I < 5; I++)
        for (J = 0; J < 6; J++)
            SUM += MAT[I][J];

    printf("Suma: %d\n", SUM);
}
