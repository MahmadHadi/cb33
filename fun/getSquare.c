#include <stdio.h>

int getSquare(int number) {
    // int sq = number * number;
    // return sq;
                                
    return number * number;  
}

int main() {
    
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    
    int ans = getSquare(num);

    printf("ans = %d ", getSquare(num));
    return 0;
}