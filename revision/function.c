#include <stdio.h>

int getMin(int num1, int num2) {
    if (num1 >= num2) {
        return num2;
    } else {
        return num1;
    }
}

int main() {

    int num1 = 1, num2 = 2;
    int a = 1, b = 2;
    int x = 1, y = 2;

    // int min1, min2, min3;

    // if (num1 >= num2) {
    //     min1 = num2;
    // } else {
    //     min1 = num1;
    // }
    
    // if (a >= b) {
    //     min2 = b;
    // } else {
    //     min2 = a;
    // }

    // if (x >= y) {
    //     min3 = y;
    // } else {
    //     min3 = x;
    // }

    printf("min = %d ", getMin(-3, -32));
    return 0;
}