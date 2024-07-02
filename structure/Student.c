// create struct named Student with fields name, rnun, pr and isPass

#include <stdio.h>
#include <stdbool.h>
int main() {
    struct Student {
        char name[50];
        int rnum;
        float pr;
        bool isPass;
    };

    struct Student hadi = {"Hadi Nayani", 39, 60.6, true};
    printf("%s \n", hadi.name);
    printf("%d \n", hadi.rnum);
    printf("%f \n", hadi.pr);
    printf("%d \n", hadi.isPass);
    return 0;
}