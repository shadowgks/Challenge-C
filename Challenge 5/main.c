#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("###############################\n");
    printf("\tChallenge 5\n");
    printf("###############################\n");

    float C,F;
    const float N = 1.8;
    printf("Entez la température en Fahrenheit: ");
    scanf("%f",&F);

    C = (F-32)/1.8;

    if(C < 0){
        printf("tres froid!");
    }else if(C > 0 && C <= 20){
        printf("froid!");
    }else if(C > 20 && C <= 40 ){
        printf("chaud!");
    }else{
        printf("tres chaud!");
    }

    printf("\n");
    printf("###############################\n");
    printf("\tResultat\n");
    printf("###############################\n");
    printf("la transforme en degre Celsius est: %.2f",C);

    return 0;
}
