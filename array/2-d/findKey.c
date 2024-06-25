#include <stdio.h>
int main() {
    int arr[3][3] = {{1, 20, -13}, {4, -5, 16}, {127, 8, -9}};
    int key = -13;
    // int flag = 0;
    int indexI = -1;
    int indexJ = -1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (key == arr[i][j]) {
                // flag = 1;
                indexI = i;
                indexJ = j;
                break;
            }
        }
    }

    // if (flag == 1) {
    //     printf("Key does exist in array ");
    // } else {
    //     printf("Key does not exist in array ");
    // }

    printf("Key founded at index : %d, %d ", indexI, indexJ);

    return 0;
}