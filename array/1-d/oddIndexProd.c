// * print product of all odd index elements -> using for loop

#include <stdio.h>
int main() {

    int arr[] = {1, 2, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int prod = 1;

    for (int i = 1; i < size; i = i + 2) {
        prod = prod * arr[i];
    }

    printf("prod = %d ", prod);

    return 0;
}