#include <stdio.h>

int cubo(void);
int I;
int main(){

int CUB;
for (I=1; I<=20; I++)
{
CUB = cubo();
printf("\nEl cubo de %d es: %d", I, CUB);
}
}

int cubo(void)
{
    return (I*I*I);
}