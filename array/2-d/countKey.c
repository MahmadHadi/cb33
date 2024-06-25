#include <stdio.h>
int main() {
    int arr[3][3] = {{1, -9, -9}, {-9, -9, 16}, {127, 8, -9}};
    int key = -9;

    int count = 0;
    // printf("%d \n", count);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (key == arr[i][j]) {
                printf("%d %d \n", i, j);
                count++;
                printf("count = %d \n", count);
            }
        }
    }   
    printf("count = %d ", count);
}