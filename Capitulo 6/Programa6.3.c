#include <stdio.h>

void main(void)
{
    int MAT[3][5], I, J;

    for (I = 0; I < 3; I++)
        for (J = 0; J < 5; J++)
            scanf("%d", &MAT[I][J]);

    for (I = 0; I < 3; I++)
    {
        for (J = 0; J < 5; J++)
            printf("%d ", MAT[I][J]);
        printf("\n");
    }
}
