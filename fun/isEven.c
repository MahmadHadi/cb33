// number - input - even, odd ?, even - return true, odd - return false 
// boolean - true - 1, false - 0
#include <stdio.h>
#include <stdbool.h>

bool isEven(int number ) {
    if (number % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    // bool ans = isEven(num);

    if (isEven(num)) {
        printf("Number is even ");
    } else {
        printf("Number is odd ");
    }
}