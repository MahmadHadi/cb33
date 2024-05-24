#include <stdio.h>
void main() {

    int num1, num2, num3;
    printf("Enter num1 : ");
    scanf("%d", &num1);
    printf("Enter num2 : ");
    scanf("%d", &num2);

    // num1 > num2 ? num3 = num1 : (num3 = num2);
    num3 = num1 > num2 ? num1 : num2;
    printf("num3 = %d ", num3);

    // if () {

    // } else {
    //     if () {

    //     } else {
    //         if () {

    //         }
    //     }
    // }

    // condition1 ? code1 : condition2 ? code2 : condition3 ? code3 : printf("Invalid input ");
}
