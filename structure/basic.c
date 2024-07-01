#include <stdio.h>
#include <stdbool.h>
int main() {

    struct Student {
        int rnum; // 4 
        float pr; // 4 
        char grade; // 1 
        bool isPass; // 1 
    }; // 10 


    // * struct structName objName; -> to create an object 
    struct Student hadi;

    // printf("hadi.rnum = %d \n", hadi.rnum);
    // printf("hadi.pr = %f \n", hadi.pr);
    // printf("hadi.grade = %c \n", hadi.grade);
    // printf("hadi.isPass = %d \n", hadi.isPass);

    hadi.rnum = 39;
    hadi.pr = 50.50;
    hadi.grade = 'B';
    hadi.isPass = true;

    printf("hadi.rnum = %d \n", hadi.rnum);
    printf("hadi.pr = %f \n", hadi.pr);
    printf("hadi.grade = %c \n", hadi.grade);
    printf("hadi.isPass = %d \n", hadi.isPass);

    printf("\n------------\n");
    struct Student nayani;
    nayani.rnum = 101;
    nayani.pr = 100;
    nayani.grade = 'A';
    nayani.isPass = false;
    printf("nayani.rnum = %d \n", nayani.rnum);
    printf("nayani.pr = %f \n", nayani.pr);
    printf("nayani.grade = %c \n", nayani.grade);
    printf("nayani.isPass = %d \n", nayani.isPass);

    printf("\n------------\n");

    struct Student hadiNayani = {202, 75.5, 'B', true};
    // printf("%d %d", hadi.rnum, hadi.isPass);
    printf("hadiNayani.rnum = %d \n", hadiNayani.rnum);
    printf("hadiNayani.grade = %c \n", hadiNayani.grade);
    printf("hadiNayani.pr = %f \n", hadiNayani.pr);
    printf("hadiNayani.isPass = %d \n", hadiNayani.isPass);

    printf("\n------------\n");
    return 0;
}