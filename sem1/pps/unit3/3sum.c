#include <stdio.h>

int main(){    
    int o , t , h , sum , threesum;
    printf("Enter Three Digit Number: ");
    scanf("%d", &threesum);
    h = threesum / 100;
    t = (threesum / 100 ) % 10;
    o = threesum % 10;
    sum = t + h + o;
    printf("Total Sum is %d", sum);
}