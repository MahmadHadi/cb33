#include <stdio.h>
void main() {
    int year;
    printf("Enter year : ");
    scanf("%d", &year);

    // year % 4 = 0
    // 2014 2016, 2020 2024 2028 2032, ...

    if (year > 0) {
        if (year % 4 == 0) {
            printf("Leap year ");
        }  else {
            printf("Normal year ");
        }
    } else {
        printf("Invalid input ");
    }

   
}
