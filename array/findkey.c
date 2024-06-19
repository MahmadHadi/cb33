// key = 12;
// arr[] = {1, 2, 101, 3, 12, -32, -101};

#include <stdio.h>
#include <stdbool.h>
int main() {

    int arr[] = {1, 2, 101, 3, 12, 12, 12, -32, -101};
    int key = 12;
    int size = sizeof(arr) / sizeof(arr[0]);
    bool flag = false;
    
    // int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            flag = true;
            // count++;
        }   
    }
    // printf("count = %d \n", count);
    if (flag == true) {
        printf("Key founded "); 
    } else {
        printf("Key does not exist ");
    }

    return 0;
}