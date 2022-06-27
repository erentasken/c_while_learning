#include <math.h>
#include <stdio.h>
int main(){
    int testerNum, result = 0, originalNum, rem, digitCount = 0, minValue, maxValue, i;
    printf("Please enter the min value: ");
    scanf("%d", &minValue);
    printf("Please enter the max value: ");
    scanf("%d", &maxValue);
    for ( i = minValue + 1 ; i < maxValue ; i ++){
        originalNum = i;
        testerNum = i;
        while (testerNum != 0){
            testerNum /= 10;
            digitCount ++;
        }
        testerNum = originalNum;
        while ( testerNum != 0 ){
            rem = testerNum%10;
            result += pow(rem,digitCount);
            testerNum /= 10;
        }
        if ( result == originalNum){
            printf("%d ", originalNum);
        }
        result = 0;
        digitCount = 0;

    }
    return 0;
}
