#include <stdio.h>
int main() {

    int row = 4, col = 2; // error 
    int arr[4][2] = {{1, 2}, {4, 2}, {5, 2}, {4, 3}};

    for (int i = 0; i < row; i++) { // row
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}