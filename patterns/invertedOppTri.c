// * * * * 
//   * * *  
//     * *  
//       *  

// * * * * 
// # * * *  
// # # * *  
// # # # *  


#include <stdio.h>
void main() {
    printf("* ");
    printf("* ");
    printf("* ");
    printf("* ");
    printf("\n");

    printf("# ");
    printf("* ");
    printf("* ");
    printf("* ");
    printf("\n");

    printf("# ");
    printf("# ");
    printf("* ");
    printf("* ");
    printf("\n");

    printf("# ");
    printf("# ");
    printf("# ");
    printf("* ");
    printf("\n");

    printf("\n---------------------\n\n");
    int height = 4;
    for (int i = 1; i <= height; i++) {
        for (int j = 2; j <= i; j++) {
            printf("  ");
        } 
        for (int k = height; k >= i; k--) {
            printf("* ");
        }
        printf("\n");
    }
}