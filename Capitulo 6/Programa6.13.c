#include <stdio.h>
#define T 3

void intercambio(int *, int *);

void main(void)
{
    int i, x, y, p[T];
    for (i=0; i<T; i++)
        scanf("%d", &p[i]);
    scanf("%d %d", &x, &y);
    intercambio(&p[x], &p[y]);
    for (i=0; i<T; i++)
        printf("%d\n", p[i]);
}

void intercambio(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
