#include <stdio.h>
#include <stdlib.h>

float parallelResistance();
//int serialResistance();
int main(){

    int function;
    int i = 0;
    while(i == 0){
        printf("\nWhat would you like to calculate? Enter 1 for parallel resistance, 2 for Serial resistance:\n");
        scanf("%d", &function);
        switch(function){
            case 1:
                i=1;
                printf("\n%f", parallelResistance());
                break;
            case 2:
                i=1;
                //serialResistance();
                break;
            default:
                printf("\nInvalid Answer");
            break;
        }
    }
}
float parallelResistance(){
    int i;
    int numResistors;
    float total= 0;
    printf("\nHow many resistors do you need the parallel resistance of? ");
    scanf("%d", &numResistors);

    int *resistorArray = calloc(numResistors, sizeof(int));
    for(i=0; i<numResistors; i++){
        printf("Enter the resistance of resistor %d: ", i+1);
        scanf("%d", &resistorArray[i]);
    }
    for(i=0; i<numResistors; i++){
        printf("%d, ", resistorArray[i]);
        total=(total+(1/resistorArray[i]));
    }

    return total;

}