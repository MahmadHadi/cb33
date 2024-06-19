// array -> all elems -> sum 
#include <stdio.h>
int main() {
    int nums[] = {1, 2, 121, 4, -1};

    int size = sizeof(nums) / sizeof(nums[0]);

    // printf("size = %d ", size);

    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum = sum + nums[i];
    }

    printf("sum = %d ", sum);
}



// nums[] = {1, 2, 121, 4, -1, 0, 12, 923, -43};
// sum = 0

// sum = nums[0] + sum; // 1 + 0 = 1
// sum = nums[1] + sum; // 2 + 1 = 3 
// sum = nums[2] + sum; // 121 + 3 = 124 
// sum = nums[3] + sum; // 4 + 124 = 128 
// ... 
