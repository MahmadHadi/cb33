#include <stdio.h>
void main() {

    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    char check;
    printf("Are you Indian ? (y / n) ");
    fflush(stdin);
    scanf("%c", &check);    

    if (age > 18 && check == 'y') {
        printf("You can vote ");
    } else {
        printf("You cannot vote ");
    }
}