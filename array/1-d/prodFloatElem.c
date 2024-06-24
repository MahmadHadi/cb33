// * product of all elems of an float typed array -> using while loop  
#include <stdio.h>
int main() {

    // float arr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float arr[] = {1.1, 2.2, 3.3};
    int size = sizeof(arr) / sizeof(arr[0]);
    float prod = 1;

    int i = 0;
    while (i < size) {
        prod = prod * arr[i];
        i++;
    }

    printf("prod = %f ", prod);
    return 0;
}

// arr = {1.1, 2.2, 3.3}
// prod = 1
// i = 0 
// size = 3

// i < size => 0 < 3 - t 
//     prod = prod * arr[i] = 1 * arr[0] = 1 * 1.1 = 1.1 
//     i++ // i = 1 

// i < size => 1 < 3 - t 
//     prod = prod * arr[i] = 1.1 * arr[1] = 1.1 * 2.2 = 2.42 
//     i++ // i = 2 

// i < size => 2 < 3 - t 
//     prod = prod * arr[i] = 2.42 * arr[2] = 2.42 * 3.3 = 7.986
//     i++ // i = 3 

// i < size => 3 < 3 - f -> loop end 
