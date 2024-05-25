// greatest of three nums using ternary
#include <stdio.h>
void main()
{

    int num1, num2, num3;

    printf("Enter num1 : ");
    scanf("%d", &num1);

    printf("Enter num2 : ");
    scanf("%d", &num2);

    printf("Enter num3 : ");
    scanf("%d", &num3);

    // if (num1 > num2) {
    //     if (num1 > num3) {
    //         printf("%d ", num1);
    //     } else {
    //         printf("%d ", num3);
    //     }
    // } else {
    //     if (num2 > num3) {
    //         printf("%d ", num2);
    //     } else {
    //         printf("num3 = %d ", num3);
    //     }
    // }

    num1 > num2 ? (num1 > num3 ? printf("%d ", num1) : printf("%d ", num3)) : (num2 > num3 ? printf("%d ", num2) : printf("num3 = %d ", num3));
}