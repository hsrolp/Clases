#include <stdio.h>

void main(void)
{
    int MAT[3][3], I, J, TEMP;

    for (I = 0; I < 3; I++)
        for (J = 0; J < 3; J++)
            scanf("%d", &MAT[I][J]);

    for (I = 0; I < 3; I++)
        for (J = I; J < 3; J++)
        {
            TEMP = MAT[I][J];
            MAT[I][J] = MAT[J][I];
            MAT[J][I] = TEMP;
        }

    for (I = 0; I < 3; I++)
    {
        for (J = 0; J < 3; J++)
            printf("%d ", MAT[I][J]);
        printf("\n");
    }
}
