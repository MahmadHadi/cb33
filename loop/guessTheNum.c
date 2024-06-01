// * guess the number 
// int key = 10;
// int input == key -> take input 
// input == key 
//     print "you have entered right input ";
// else    
//     take input;

#include <stdio.h>
#include <stdbool.h>
void main() {

    int num;
    int key = 10;

    printf("Enter a number : ");
    scanf("%d", &num);

    while (true) {
        if (num == key) {
            printf("Valid input ");
            break;
        } else {
            printf("Enter a number : ");
            scanf("%d", &num);
        }
    }

    // * for (; condition; ){}

    // for (; true;) {
    //     if (num == key) {
    //         printf("Valid input ");
    //         break;
    //     } else {
    //         // printf("Invalid input \n");
    //         printf("Enter a number : ");
    //         scanf("%d", &num);
    //     }
    // }
}

    // if (num == key) {
    //     printf("Valid input ");
    // } else {
    //     printf("Enter a number : ");
    //     scanf("%d", &num);
    // }


    // if (num == key) {
    //     printf("Valid input ");
    // } else {
    //     printf("Enter a number : ");
    //     scanf("%d", &num);
    // }

    
    // if (num == key) {
    //     printf("Valid input ");
    // } else {
    //     printf("Enter a number : ");
    //     scanf("%d", &num);
    // }

    // if (num == key) {
    //     printf("Valid input ");
    //     break;
    // } else {
    //     printf("Enter a number : ");
    //     scanf("%d", &num);
    // }

    // if (num == key) {
    //     printf("Valid input ");
    //     break;
    // } else {
    //     printf("Enter a number : ");
    //     scanf("%d", &num);
    // }