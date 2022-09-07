#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("###############################\n");
    printf("\tChallenge 6\n");
    printf("###############################\n");

    float C,F;
    const float N = 1.8;
    printf("Entez la distance en Mile: ");
    scanf("%f",&F);

    C = (F-32)/1.8;

    printf("\n");
    printf("###############################\n");
    printf("\tResultat\n");
    printf("###############################\n");
    printf("la transforme en degre Celsius est: %.2f",C);
    return 0;
}
