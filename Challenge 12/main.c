#include <stdio.h>
#include <stdlib.h>
int N=432,R=0,C;

int Rev(){
    C = N % 10;
    R = R * 10 + C;
    N /= 10;
}

int main()
{
    printf("###############################\n");
    printf("\tChallenge 12\n");
    printf("###############################\n");
    printf("\n");

    printf("The Numbres is: %d\n",N);

       Rev();
       Rev();
       Rev();


    printf("\n");
    printf("###############################\n");
    printf("\tResultat\n");
    printf("###############################\n");

    //Resultat
    printf("\n");
    printf("la Numbere inverse est: %d",R);
    printf("\n");
    return 0;
}
