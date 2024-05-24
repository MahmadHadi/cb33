#include <stdio.h>
void main() {
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

    switch (operator) {
        case '+': 
            printf("%d + %d = %d ", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d ", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d ", num1, num2, num1 * num2);
            break;
        case '/':
            printf("%d / %d = %.2f ", num1, num2, (float)num1 / num2);
            break;
        default:
            printf("Invalid input ");
            break;
    }
}