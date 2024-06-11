#include <stdio.h>
float getPow(int base, int pow) {
    float ans = 1; 
    // int count = 1;
    // base = 3, pow = 4
    // count <= pow - 1 <= 4 - t 
    //     ans = ans * base; // 1 * 3 = 3
    //     count++; // 2
    // count <= pow => 2 <= 4 - t 
    //     ans = ans * base; // 3 * 3 = 9
    //     count++; // 3 
    // count <= pow -> 3 <= 4 - t 
    //     ans = ans * base; // 9 * 3 = 27 
    //     count++; // 4
    // count <= pow - 4 <= 4 - t   
    //     ans = ans * base; // 27 * 3 = 81
    //     count++; // 5 
    // count <= pow - 5 <= 4 - f 
    int temp = pow;
    if (temp < 0) {
        temp = temp * (-1);
    }
    for (int count = 1; count <= temp; count++) {
        ans = ans * base;
    }
    if (pow < 0) {
        return 1 / ans;
    } else {
        return ans;
    }
}

int main() {

    int base, pow;
    printf("Enter base : ");
    scanf("%d", &base);
    printf("Enter pow : ");
    scanf("%d", &pow);

    printf("ans = %f ", getPow(base, pow));

    return 0;
}

// base = 10
// pow = 4

// 10 * 10 * 10 * 10 - ans 

// base = 3
// pow = -4

// ans = 1 / (3 * 3 * 3 * 3) 