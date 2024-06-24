#include <stdio.h>
#include <stdbool.h>
int main() {

    int num;
    float fl = 3.1415;
    char ch = 'f';
    bool flag = true;

    int size = sizeof(num);
    printf("size of int = %d \n", sizeof(num));
    printf("size of float = %d \n", sizeof(fl));
    printf("size of char = %d \n", sizeof(ch));
    printf("size of bool = %d \n", sizeof(flag));
    printf("size of int = %d \n", sizeof(int));

    int arr[5];

    printf("sizeof arr = %d ", sizeof(arr));


    return 0;
}

    sizeof(int) = 4 
    sizeof(arr) = 20
    sizeof(arr[0]) = 4
    size = x = 5 => size = 5 

    4 * x = 20
    x = 20 / 4 = 5 

    size = sizeof(arr) / sizeof(arr[0]);