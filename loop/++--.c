#include <stdio.h>
void main() {

    int num = 1;
    printf("%d ", num);

    num = num + 1; // 1 + 1 = 2 
    printf("%d \n", num);

    num = num + 10; // 2 + 10 = 12
    printf("num + 10 = %d \n", num);

    num = num - 20; // 12 - 20 = -8
    printf("num - 20 = %d \n", num);

    num = num * 10;
    printf("num * 10 = %d \n", num);

    num = num / 5;
    printf("num / 5 = %d \n", num);

   
    num += 10; // num = num + 10;
    printf("num += 10 = %d \n", num);

    num -= 10;
    printf("num -= 10 = %d \n", num);

    num *= 10;
    printf("num *= 10 = %d \n", num);

    num /= 10;
    printf("num /= 10 = %d \n", num);

    num++; // num += 1 // num = num + 1
    printf("num++; = %d \n", num);

    num--; // num -= 1 // num = num - 1
    printf("num--; = %d \n", num);

    // num++10; -> error 
    // num**; -> error 
    // num// -> error 
}