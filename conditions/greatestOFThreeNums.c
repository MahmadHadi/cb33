    // * greatest of two nums
// 10, 2, 3 -> 10

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

    int lg;

    if (num1 > num2) {
        if (num1 > num3) {
            printf("%d ", num1);
        } else {
            printf("%d ", num3);
        }
    } else {
        if (num2 > num3) {
            printf("%d ", num2);
        } else {
            printf("num3 = %d ", num3);
        }
    }
    
}

// num1 < num2
// num2 < num3 -> print num3

// num1 > num2
// num1 > num3 -> print num1

// num1 > num2
// num1 < num3 -> print num3

// num1 > num2
// num3 < num2 -> print num3

// num1 = 1, num2 = 2, num3 = 3

// num1 > num2
//     num1 > num3
//         print num1 
//     else 
//         print num3 
// else 
//     num2 > num3 
//         print num2 
//     else 
//         print num3

// 1 > 2
//     // code 
// else 
//     2 > 3 
//         // code 
//     else 
//         print 3 
