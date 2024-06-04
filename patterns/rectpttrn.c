    // * *
    // * * 
    // * *
#include <stdio.h>
void main() {
    int row = 3, col = 3;

    // printf("Enter number of row : ");
    // scanf("%d", &row); // row = 3

    // printf("Enter number of column : ");
    // scanf("%d", &col); // col = 2
 
    for (int i = 1; i <= row; i++) { // row
        for (int j = 1; j <= col; j++) { // col
            printf("* ");
        } 
        printf("\n");
    }
    
    printf("\n------------------------\n");

    // * 1 1 1 1
    // * 2 2 2 2
    // * 3 3 3 3
    // * 4 4 4 4
    // * height = 4
    // int count = 1;
    // printf("%d ", count);
    // printf("%d ", count);
    // printf("%d ", count);
    // printf("%d ", count);
    // printf("\n");
    // count++; // 2 

    // printf("%d ", count);
    // printf("%d ", count);
    // printf("%d ", count);
    // printf("%d ", count);
    // printf("\n");
    // count++; // 3

    // printf("%d ", count);
    // printf("%d ", count);
    // printf("%d ", count);
    // printf("%d ", count);
    // count++; // 4
    // printf("\n");
    
    // printf("%d ", count);
    // printf("%d ", count);
    // printf("%d ", count);
    // printf("%d ", count);
    // printf("\n");
    // count++; // 5 
    // // height >= count 
    // int count = 1;
    
    for (int j = 1; j <= 4; j++) {
        // printf("%d ", count);
        // printf("%d ", count);
        // printf("%d ", count);
        // printf("%d ", count);

        for (int i = 1; i <= 4; i++) {
            printf("%d ", j);
        }
        printf("\n");
        // count++; // 5 
    }

     printf("\n------------------------\n");    
    
} 