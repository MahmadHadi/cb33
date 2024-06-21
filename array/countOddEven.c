// * arr -> {1, 2, 3, 4, 5}

#include <stdio.h>
int main() {

    int arr[] = {1, 2, 3, 4, 5};

    int size = sizeof(arr) / sizeof(arr[0]);
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++; 
        } else {
            oddCount++;
        }
    }
    printf("oddCount = %d, evenCount = %d ", oddCount,  evenCount);

    return 0;
}
