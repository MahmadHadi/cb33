#include <stdio.h>
void main() {

    // + - / * % 

    int num1, num2;
    printf("Enter number 1 : ");
    scanf("%d", &num1);
    printf("Enter number 2 : ");
    fflush(stdin);
    scanf("%d", &num2);

    char operator;
    printf("Enter operator : ");
    fflush(stdin);
    scanf("%c", &operator);

    if (operator == '+') {
        printf("%d + %d = %d \n", num1, num2, num1 + num2);
    } else if (operator == '-') {
        printf("%d - %d = %d \n", num1, num2, num1 - num2);
    } else if (operator == '/') {
        printf("%d / %d = %.2f \n", num1, num2, (float)num1 / (float)num2);
    } else if (operator == '*') {
        printf("%d * %d = %d \n", num1, num2, num1 * num2);
    } else if (operator == '%') {
        printf("%d % %d = %d \n", num1, num2, num1 % num2);
    } else {
        printf("Invalid input ");
    }
}