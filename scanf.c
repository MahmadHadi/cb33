#include<stdio.h>
void main() {
    int num;
    char ch;
    float fl;
    printf("Enter input {num, ch} : ");

    scanf("%d,%c, %f", &num, &ch, &fl); 

    printf("num = %d, ch = %c, fl = %f ", num, ch, fl);
    
}