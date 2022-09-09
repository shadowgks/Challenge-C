#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD


int main()
{
    int N,R=0,C;
=======
int N=432,R=0,C;

int Rev(){
    C = N % 10;
    R = R * 10 + C;
    N /= 10;
}

int main()
{
>>>>>>> 27330a217e43ec4a10439ee89eb1c9eb5fd3bdd9
    printf("###############################\n");
    printf("\tChallenge 12\n");
    printf("###############################\n");
    printf("\n");

<<<<<<< HEAD
    printf("Entrez le trois chifre: ",N);
    scanf("%d",&N);

    C = N % 10;
    R = R * 10 + C;
    N /= 10;
    C = N % 10;
    R = R * 10 + C;
    N /= 10;
    C = N % 10;
    R = R * 10 + C;
=======
    printf("The Numbres is: %d\n",N);

       Rev();
       Rev();
       Rev();

>>>>>>> 27330a217e43ec4a10439ee89eb1c9eb5fd3bdd9

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
