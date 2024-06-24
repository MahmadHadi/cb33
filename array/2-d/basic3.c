#include <stdio.h>
int main() {

    // int arr[][2] = {{1, 2}, {4, 2}, {5, 2}, {4, 3}};
    int arr[][2] = {1, 2, 4, 2, 5, 2, 4, 4};
    
    // 1 2 4
    // 2 5 2
    // 4 3 0
    // 0 3 6422284

    // {{1, 2, 4}, {2, 5, 2}, {4, 3 , 0}, {0, 3, 6422284}}

    for (int i = 0; i < 4; i++) { // row
        for (int j = 0; j < 2; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}