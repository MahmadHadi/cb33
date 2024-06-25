#include <stdio.h>
int main() {

    int arr[3][3] = {{1, 20, -13}, {4, -5, 16}, {127, 8, -9}};
    int sum = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum = sum + arr[i][j];
        }
    }

    printf("sum = %d ", sum);
    return 0;
}