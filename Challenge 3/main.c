#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("###############################\n");
    printf("\tChallenge 3\n");
    printf("###############################\n");

    int C;
    float F;
    const float N = 1.8;
    printf("Entez la température en Fahrenheit: ");
    scanf("%d",&C);

    F = (C*N) + 32;

    printf("###############################\n");
    printf("\tResultat\n");
    printf("###############################\n");
    printf("la transforme en degre est: %.2f",F);

    return 0;
}
