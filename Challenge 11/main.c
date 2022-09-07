#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("###############################\n");
    printf("\tChallenge 11\n");
    printf("###############################\n");
    printf("\n");

    float w,h,P;
    printf("Entre The Height: ");
    scanf("%f",&h);
    printf("Entre The Width: ");
    scanf("%f",&w);


    P = 2*(w + h);


    printf("\n");
    printf("###############################\n");
    printf("\tResultat\n");
    printf("###############################\n");

    //Resultat
    printf("\n");
    printf("la circonférence d'un rectangle est: %.2f",P);
    printf("\n");
    return 0;
}
