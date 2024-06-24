#include <stdio.h>
int main() {

    int nums[10];
    float myFls[3];
    char chs[2];

    nums[0] = 1;
    nums[1] = 2;
    nums[2] = 6;
    nums[3] = 3;
    nums[4] = 4;

    // printf("%d ", nums[0]);
    // printf("%d ", nums[1]);
    // printf("%d ", nums[2]);
    // printf("%d ", nums[3]);
    // printf("%d ", nums[4]);
    int size = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i <= size; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}