// array -> all even nums 

#include <stdio.h>
int main() {

    int nums[] = {1, 2, 3, 4, 5, 1, 2, 121, 4, -1, 0, 12, 923, -43};
    int size = sizeof(nums) / sizeof(nums[0]);
    
    int sum = 0;

    for (int i = 0; i < size; i++) {
        if (nums[i] % 2 == 0) {
            sum = sum + nums[i];
        }
    }

    printf("sum = %d ", sum);

    return 0;
}