#include <stdio.h>
#include <stdlib.h>

float parallelResistance();
float serialResistance();
int main(){

    int function;
    int i = 0;
    while(i == 0){
        printf("\nWhat would you like to calculate? Enter 1 for parallel resistance, 2 for Serial resistance:\n");
        scanf("%d", &function);
        switch(function){
            case 1:
                i=1;
                printf("\nThe total resistance is: %.1f", parallelResistance());
                break;
            case 2:
                i=1;
                printf("\nThe total resistance is: %.1f", serialResistance());
                break;
            default:
                printf("\nInvalid Answer");
            break;
        }
    }
}
float serialResistance(){
    int i;
    int numResistors;
    int total= 0;
    printf("\nHow many resistors do you need the parallel resistance of? ");
    scanf("%d", &numResistors);
    float *resistorArray = calloc(numResistors, sizeof(float));
    for(i=0; i<numResistors; i++){
        printf("Enter the resistance of resistor %d: ", i+1);
        scanf("%f", &resistorArray[i]);
    }
    for(i=0; i<numResistors; i++){
        total+=resistorArray[i];
    }
    return total;
}
float parallelResistance(){
    int i;
    int numResistors;
    float total= 0;
    printf("\nHow many resistors do you need the parallel resistance of? ");
    scanf("%d", &numResistors);

    float *resistorArray = calloc(numResistors, sizeof(float));
    for(i=0; i<numResistors; i++){
        printf("Enter the resistance of resistor %d: ", i+1);
        scanf("%f", &resistorArray[i]);
    }
    for(i=0; i<numResistors; i++){
        total+= (1.0/resistorArray[i]);
    }

    return 1.0 / total;
}
