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
    hadi.rnum = 101;
    hadi.pr = 100.10;
    hadi.grade = 'A';
    hadi.isPass = true;
    
    printf("hadi.rnum = %d \n", hadi.rnum);
    printf("hadi.pr = %f \n", hadi.pr);
    printf("hadi.grade = %c \n", hadi.grade);
    printf("hadi.isPass = %d \n", hadi.isPass);
    return 0;
}