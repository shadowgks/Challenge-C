#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("###############################\n");
    printf("\tChallenge 4\n");
    printf("###############################\n");

    float Mile,M,KM; //var refactorie
    const float N = 1.609;
    printf("Entez la distance en Mile: ");
    scanf("%f",&Mile);


    KM = Mile/1.609;
    M = KM * 1000;

    printf("###############################\n");
    printf("\tResultat\n");
    printf("###############################\n");
    printf("la transforme en Mitre est: %.2f",M);

    return 0;
}

