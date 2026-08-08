#include <stdio.h>

int main(){
    float a , b;
    char c;
    printf("Type A: ");
    scanf("%f", &a);
    printf("Type Expersion(+ , - , * , /): ");
    scanf(" %c", &c);
    printf("Type B: ");
    scanf("%f", &b);

    if (c == '+' ) {
        printf("Addition: %.2f\n", a + b);
    }
    else if (c == '-') {
        printf("Subtraction: %.2f\n", a - b);
    }
    else if (c == '*') {
        printf("Multiplication: %.2f\n", a*b);
    }
    else if (c == '/') {
        printf("Division: %.2f\n", a/b);
    }
    else {
        printf("Please type right operator");
    }
}
