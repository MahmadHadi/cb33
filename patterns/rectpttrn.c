    // * *
    // * * 
    // * *
#include <stdio.h>
void main() {
    int row, col;

    printf("Enter number of row : ");
    scanf("%d", &row); // row = 3

    printf("Enter number of column : ");
    scanf("%d", &col); // col = 2
 
    for (int i = 1; i <= row; i++) { // row
        for (int j = 1; j <= col; j++) { // col
            printf("* ");
        } 
        printf("\n");
    }
}