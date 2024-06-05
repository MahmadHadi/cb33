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

    // * 1 2 3 
    // * 4 5 6 
    // * 7 8 9
    int sum = 1;

    // printf("%d ", sum);
    // sum++; // 2  
    // printf("%d ", sum);
    // sum++; // 3
    // printf("%d ", sum);

    // printf("\n");

    // sum++; // 4
    // printf("%d ", sum);
    // sum++; // 5 
    // printf("%d ", sum);
    // sum++; // 6 
    // printf("%d ", sum);

    // printf("\n");

    // sum++; // 7
    // printf("%d ", sum);
    // sum++; // 8
    // printf("%d ", sum);
    // sum++; // 9
    // printf("%d ", sum);

    // printf("\n");


    for (int i = 1; i <= 3; i++) {
        // sum++;   
        // printf("%d ", sum);
        // sum++; 
        // printf("%d ", sum);
        // sum++;
        // printf("%d ", sum);

        for (int j = 1; j <= 3; j++) {
            printf("%d ", sum);
            sum++;
        }

        printf("\n");
    }


printf("\n------------------------\n");    
    sum = 97;
    for (int i = 1; i <= 3; i++) {
        // sum++;   
        // printf("%d ", sum);
        // sum++; 
        // printf("%d ", sum);
        // sum++;
        // printf("%d ", sum);

        for (int j = 1; j <= 3; j++) {
            printf("%c ", sum);
            sum++;
        }
        printf("\n");
    }

    printf("\n------------------------\n");    

    // * * * * 
    // *     *
    // *     *   
    // * * * * 

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if (i == 1 || i == 3 || j == 1 || j == 3) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }    
}