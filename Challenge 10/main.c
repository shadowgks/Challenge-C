#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("###############################\n");
    printf("\tChallenge 10\n");
    printf("###############################\n");
    printf("\n");

    float r,C;
    const float P = 3.14;
    printf("Entrez le rayon du cercle: ");
    scanf("%f",&r);

    C = 2 * (P * r);

    printf("\n");
    printf("###############################\n");
    printf("\tResultat\n");
    printf("###############################\n");

    //Resultat
    printf("\n");
    printf("la circonférence du cercle est: %.1f",C);
    printf("\n");
    return 0;
}
