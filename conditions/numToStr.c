// user - input - single digit num 
//         input = 1 -> print ('one')
//         input = 5 -> print ('five')

#include<stdio.h>
void main() {
    int num = 6;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num == 0) {
        printf("zero ");
    }
    if (num == 1) {
        printf("One ");
    }
    
}