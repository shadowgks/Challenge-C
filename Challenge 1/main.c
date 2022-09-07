#include <stdio.h>
#include <stdlib.h>

char Nom[10],Prenom[10],Sexe[10];
int Age,Tel;

int main()
{
    printf("Hello Guys!\n");
    printf("First Name: ");
    scanf("%s",Nom);

    printf("\nLast Name: ");
    scanf("%s",Prenom);

    printf("\nAge: ");
    scanf("%d",&Age);

    printf("\nSexe: ");
    scanf("%s",Sexe);

    printf("\nPhone: ");
    scanf("%d",&Tel);

    printf("\nMy info is: %s | %s | %d | %s | %d",Nom,Prenom,Age,Sexe,Tel);




    return 0;
}
