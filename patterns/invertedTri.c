// * * * 
// * * 
// * 
#include <stdio.h>
void main() {
    printf("* ");
    printf("* ");
    printf("* ");
    printf("\n");

    printf("* ");
    printf("* ");
    printf("\n");

    printf("* ");
    printf("\n");

    printf("\n-----------------------------\n");

    for (int i = 1; i <= 3; i++) {
        for (int j = 3; j >= i; j--) {
            printf("* ");
        }
        printf("\n");
    }
}
for (int i = 1; i <= 3; i++) {
    for (int j = 3; j >= i; j--) {
        printf("* ");
    }
    printf("\n");
}

i = 1; 1 <= 3 - t 
    j = 3; 0 >= 1; - t 
        print "* "
    print "\n"

i = 2; 2 <= 3 - t 
    j = 3; 1 >= 2;
        print "* "; 
    print "\n"

i = 3; 3 <= 3 - t 
    j = 3; 2 >= 3 - t 
        print "* "
    print "\n"

i = 4; 4 <= 3 - false -> loop end 