#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("###############################\n");
    printf("\tChallenge 2\n");
    printf("###############################\n");

    float Mile,M,KM;
    const float N = 1.609;
    printf("Entez la distance en Metre: ");
    scanf("%f",&M);

    KM = M / 1000;
    Mile = KM * N;

    printf("###############################\n");
    printf("\tResultat\n");
    printf("###############################\n");
    printf("la transforme en Mile est: %.2f",Mile);

    return 0;
}
