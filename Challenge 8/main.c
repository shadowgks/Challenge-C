#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,M,S;
    printf("###############################\n");
    printf("\tChallenge 8\n");
    printf("###############################\n");

    printf("Entrez le nombre A: ");
    scanf("%f",&a);
    printf("Entrez le nombre A: ");
    scanf("%f",&b);
    printf("Entrez le nombre A: ");
    scanf("%f",&c);

    S = a + b + c;
    M = S / 3;

    printf("\n");
    printf("###############################\n");
    printf("\tResultat\n");
    printf("###############################\n");
    printf("La Moyenne La note est: %.2f",M);
    return 0;
}
