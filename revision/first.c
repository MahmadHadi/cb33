#include <stdio.h>
void main() {
    printf("Hadi Nayani \n");

    int num = 10; // %d 
    float fl = 12.12; // %f 
    char ch = 'a'; // %c

    printf("num = %d, fl = %f ch = %c \n", num, fl, ch);

    printf("Enter a number : ");
    scanf("%d", &num);

    printf("num = %d, fl = %f ch = %c \n", num, fl, ch);

    
}