#include <stdio.h>
#include <stdlib.h>

int a,b,R;

int Somme(){
    R = a + b;
    return R;
}

int Multiplication(){
    R = a * b;
    return R;
}

int Proposition(){
    R = a - b;
    return R;
}

int Devision(){
    R = a / b;
    return R;
}

int Modulo(){
    R = a % b;
    return R;

}


int main()
{
    printf("###############################\n");
    printf("\tChallenge 7\n");
    printf("###############################\n");

    printf("Entrez le nombre A: ");
    scanf("%d",&a);
    printf("Entrez le nombre A: ");
    scanf("%d",&b);

    Somme(a,b);
    Multiplication(a,b);
    Proposition(a,b);
    Devision(a,b);
    Modulo(a,b);


    printf("\n");
    printf("###############################\n");
    printf("\tResultat\n");
    printf("###############################\n");
    printf("la Rusltat est: \nLa Somme: %d \nLa Multiplication: %d \nNa9is: %d \nDevision : %d"
           ,Somme(),Multiplication(),Proposition(),Devision(),Modulo());
    return 0;
}
