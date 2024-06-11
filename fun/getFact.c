#include <stdio.h>
int getFact(int num) {
    int ans = 1;
    while (num != 0) {
        ans = ans * num;
        num--;
    }
    return ans;
}

int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Invalid input \n");
        return 0;
    }

    printf("Ans = %d ", getFact(num));
}

// num = 5 
// int ans = 1
// ans = ans * num = 1 * 5 = 5
// num-- // 4

// ans = ans * num // 5 * 4 = 20
// num--; // 3

// ans = ans * num // 20 * 3 = 60
// num--; // 2

// ans = ans * num // 60 * 2 = 120 
// num--; // 1 

// ans = ans * num // 120 * 1 = 120
// num--/ // 0