#include <stdio.h>

void main(void)
{
    int MAT[5][5], I, J;

    for (I = 0; I < 5; I++)
        for (J = 0; J < 5; J++)
            scanf("%d", &MAT[I][J]);

    for (I = 0; I < 5; I++)
    {
        for (J = 0; J < 5; J++)
            if (I == J)
                printf("%d ", MAT[I][J]);
        printf("\n");
    }
}
