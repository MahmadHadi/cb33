// #include <stdio.h>
// #include <stdbool.h>
// int main() {

//     union Student {
//         int rnum;
//         float pr;
//         char grade;
//         bool isPass;
//     };
//     printf("\n------------\n");

//     union Student hadi;
//     hadi.rnum = 101;
//     hadi.pr = 100.10;
//     hadi.grade = 'A';
//     hadi.isPass = true;

//     printf("hadi.rnum = %d \n", hadi.rnum);
//     printf("hadi.pr = %f \n", hadi.pr);
//     printf("hadi.grade = %c \n", hadi.grade);
//     printf("hadi.isPass = %d \n", hadi.isPass);
//     return 0;
// }

#include <stdio.h>
#include <stdbool.h>

int main() {
    union Student {
        int rnum;
        float pr;
        char grade;
        bool isPass;
    };

    printf("\n------------\n");

    union Student hadi;
    hadi.rnum = 101;                        // This sets the shared memory to hold the integer 101.
    printf("hadi.rnum = %d \n", hadi.rnum); // This prints an invalid value.

    hadi.pr = 100.10;                   // This overwrites the shared memory to hold the float 100.10.
    printf("hadi.pr = %f \n", hadi.pr); // This prints an invalid value.

    hadi.grade = 'A';                         // This overwrites the shared memory to hold the char 'A'.
    printf("hadi.grade = %c \n", hadi.grade); // This prints an invalid value.

    hadi.isPass = true;                         // This overwrites the shared memory to hold the bool true.
    printf("hadi.isPass = %d \n", hadi.isPass); // This prints 1, which is the value of true in C.

    return 0;
}
