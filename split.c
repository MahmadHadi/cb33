// * num = 56, first, sec first = 5 sec = 6
#include<stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int first, second;

    first = num / 10; // first = 5
    second = num % 10; // second = 6 

    printf("%d, %d ", first, second);
}