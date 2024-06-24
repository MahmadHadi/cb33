// * arr -> {1, 2, 3, 4, 5}
// odd nums - even num
// (1 + 3 + 5) - (2 + 4) = 9 - 6 = 3

#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int oddSum = 0, evenSum = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenSum = evenSum + arr[i];
        } else {
            oddSum = oddSum + arr[i];
        }
    }
    printf("oddSum - evenSum = %d ", oddSum - evenSum);
    return 0;
}
