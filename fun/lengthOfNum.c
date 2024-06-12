// num = 121 - return 3,
// num = 9321 - return 4,
// num = 434983 - return 6,

#include <stdio.h>

int getLength(int num) {
    int len = 0;
    while (num != 0) {
        len++;
        num = num / 10;
    }
    return len;
}
int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    printf("len = %d ", getLength(num));
    return 0;
}

// num = 321
// int len = 0;

// num != 0 = 321 != 0 - t 
//     len++; // 1
//     num = num / 10; // 32

// num != 0 - 32 != 0 - t 
//     len++; // 2
//     num = num / 10; // 3

// num != 0 - 3 != 0 - t 
//     len++; // 3
//     num = num / 10; // 0

// num != 0 - 0 != 0 - f - loop end 
// return len;