#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1,x2,y1,y2
    ,M
    ,N
    ,MN;
    printf("###############################\n");
    printf("\tChallenge 9\n");
    printf("###############################\n");

    printf("Entrez le nombre x1: ");
    scanf("%f",&x1);
    printf("Entrez le nombre y1: ");
    scanf("%f",&y1);
    printf("Entrez le nombre x2: ");
    scanf("%f",&x2);
    printf("Entrez le nombre y2: ");
    scanf("%f",&y2);

    M = (x2-x1);
    N = (y2-y1);
    MN = sqrt( pow(M,2) + pow(N,2));

    printf("\n");
    printf("###############################\n");
    printf("\tResultat\n");
    printf("###############################\n");
    printf("Alors la distance entre M et N est: %.2f",MN);
    return 0;
}
