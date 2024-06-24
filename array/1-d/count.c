// findKey.c -> print first index 
//         i/p ->  int arr[] = {1, 2, 101, 3, 12, 12, 12, -32, -101};
//                 int key = 12;
//         o/p ->  4

#include <stdio.h>
int main() {
    // int arr[] = {1, 2, 101, 3, 12, 12, 12, -32, -101};
    int arr[] = {1, 2, 101, 3, -32, -101};
    int key = 12;
    int index = -1;
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        if (key == arr[i]) {
            index = i;
            break;
        }
    }
    printf("index = %d ", index);
}