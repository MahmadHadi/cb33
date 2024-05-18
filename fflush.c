#include<stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);  

    char ch;
    printf("Enter a char : ");

    fflush(stdin);    
    scanf("%c", &ch);
    printf("num = %d, ch = %c ", num, ch);
}