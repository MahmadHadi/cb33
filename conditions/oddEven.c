#include <stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    // 0 2 4 6 8 10 ... 
    
    // num % 2 == 0 -> even 
    // num % 2 != 0 -> odd 

    if (num % 2 == 0) {
        printf("Even ");
    } else {
        printf("Odd ");
    }
}
