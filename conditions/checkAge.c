// * age -> input -> check if 18 + or not 
#include <stdio.h>
#include<stdbool.h>

void main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Hello teen \n");
    }

    if (age < 18) {
        printf("Hello kid \n");
    }
}