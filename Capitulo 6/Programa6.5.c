#include <stdio.h>

void main(void)
{
    int MAT[4][4], I, J, DIAG1 = 0, DIAG2 = 0;

    for (I = 0; I < 4; I++)
        for (J = 0; J < 4; J++)
            scanf("%d", &MAT[I][J]);

    for (I = 0; I < 4; I++)
    {
        DIAG1 += MAT[I][I];
        DIAG2 += MAT[I][3 - I];
    }

    printf("Diagonal principal: %d\n", DIAG1);
    printf("Diagonal secundaria: %d\n", DIAG2);
}
