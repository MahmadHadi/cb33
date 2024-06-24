#include <stdio.h>
int main() {

    // nums = {1, 2, 3, 4};
    // nums = {1, 2, 3, {4, 2, 1 ,3 }}

    // int num[row][col] = {{elements of row1}, {elements of row2}, {elements of row3}, ... };

    int num1d[5] = {1, 2, 3, 4, 5};
    // int num2d[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};

    int arr[3][3] = {{1, 2, 3}, {4, 2, 32}, {3, 2, 6}}; 

    // printf("%d ", num1d[2]); // 3 
    printf("%d ", arr[0][1]);
    printf("%d ", arr[1][2]);

    printf("\n-----------\n");
    
    printf("%d ", arr[0][0]);
    printf("%d ", arr[0][1]);
    printf("%d ", arr[0][2]);
    printf("\n");

    printf("%d ", arr[1][0]);
    printf("%d ", arr[1][1]);
    printf("%d ", arr[1][2]);
    printf("\n");

    printf("%d ", arr[2][0]);
    printf("%d ", arr[2][1]);
    printf("%d ", arr[2][2]);
    printf("\n");
    
    printf("\n-----------\n");

    for (int i = 0; i < 3; i++) { // row
        for (int j = 0; j < 3; j++) { // col || elem
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n-----------\n");

    printf("sizeof arr = %d \n", sizeof(arr));
    printf("sizeof arr[0][0] = %d \n", sizeof(arr[0][0]));
    
    return 0;
}
