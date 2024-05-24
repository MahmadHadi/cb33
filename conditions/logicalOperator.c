// greatest of three nums using logical operators 
#include <stdio.h>
void main() {
    int num1, num2, num3;
    printf("Enter num1 : ");
    scanf("%d", &num1);
    printf("Enter num2 : ");
    scanf("%d", &num2);
    printf("Enter num3 : ");
    scanf("%d", &num3);

    // num1 > num2 && num1 > num3 -> print num1 
    // num2 > num1 && num2 > num3 -> print num2 
    // num3 > num1 && num3 > num2 -> print num3 

    // 2 2 1 

    // 2 > 2 -> f 
    // 2 > 2 -> f 
    // 1 > 2 -> f 

    if (num1 > num2 && num1 > num3) {
        printf("%d ",num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("%d ", num2);
    } else if (num3 > num2 && num3 > num1) {
        printf("%d ", num3);
    } else {
        printf("Either two nums or three nums are same \n ");
        printf("%d == %d == %d ", num1, num2, num3);
    }
}