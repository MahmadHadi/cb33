// user -> input (char) 
//         input = 0 - 9 -> print "number" 
//         input = a - z -> "lower case" 
//         input = A - Z -> "upper case" 
//         else 
//             print "Invalid input "
#include <stdio.h>
void main() {
    char input;
    printf("Enter a character : ");
    scanf("%c", &input);

    if (input >= 48 && input <= 57) {
        printf("Number ");
    } else {
        if (input >= 65 && input <= 90) {
            printf("Uppercase ");
        } else {
            if (input >= 97 && input <= 122) {
                printf("Lowercase ");
            } else {
                printf("Invalid input ");
            }
        }
    }
    // if (input >= 48 && input <= 57) {
    //     printf("Number ");
    // } else {
    //     printf("Invalid input 1");
    // }
    // if (input >= 65 && input <= 90) {
    //         printf("Uppercase ");
    // } else {
    //     printf("Invalid input 2");
    // }  
    // if (input >= 97 && input <= 122) {
    //     printf("Lowercase ");
    // } else {
    //     printf("Invalid input 3");
    // } 
}