#include <stdio.h>

int main(){
    int i, sum,x;
    float average;

    for(i=0; i<5; i++){
        scanf("%d", &x);
        sum += x;
    }

    average = (float)sum/5;

    printf("The average is %.2f",average);


    return 0;
}