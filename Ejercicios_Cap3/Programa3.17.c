#include <stdio.h>

int main(){

int I, J, NUM, SUM, C=0;
printf("\nIngrese el numero limite: ");
scanf("%d", &NUM);
for (I=1; I <=NUM; I++){
    SUM = 0;
for (J = 1; J <=NUM; J++){
    if ((I %J)==0)
    SUM += J;
    if (SUM == I)
    {
        printf("\n%dEs un numero perfecto.");
        C++;
}

}
printf("\nEntre 1 y %d hay %d numeros perfectos", NUM, C);
}}