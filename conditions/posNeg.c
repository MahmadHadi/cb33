// +ve -ve zero 
#include<stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num > 0) 
        printf("+ve number "); 
        
    if (num < 0) printf("-ve number "); 

    if (num == 0) {
        printf("Num is zero ");
    }
}
