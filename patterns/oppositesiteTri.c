//       *
//     * *
//   * * *
// * * * *

#include <stdio.h>
void main() {

    printf("# ");
    printf("# ");
    printf("# ");
    printf("* ");
    printf("\n");

    printf("# ");
    printf("# ");
    printf("* ");
    printf("* ");
    printf("\n");

    printf("# ");
    printf("* ");
    printf("* ");
    printf("* ");
    printf("\n");

    printf("* ");
    printf("* ");
    printf("* ");
    printf("* ");
    printf("\n");

    printf("\n-------------\n");
    int height = 6;
    for (int i = 1; i <= height; i++) {
        for (int j = height - 1; j >= i; j--) {
            printf("  ");
        }
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }    
}   