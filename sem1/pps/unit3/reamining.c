#include <stdio.h>

int main(){
    int td , m , rd;
    printf("Enter Total Days: ");
    scanf("%d", &td);
    m = td / 30;
    rd = td % 30;
    printf("%d Months, %d Days are reamining.\n", m, rd);
}
