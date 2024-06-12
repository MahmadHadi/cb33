#include <stdio.h>
int getFact(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } 
    int ans = 1;
    while (num >= 0) {
        ans = ans * num;
        num--;
    }
    return ans;
}

int getnCr(int n, int r) {
    if (n < r) {
        return -1;
    }
    int ans = getFact(n) / (getFact(r) * getFact(n - r));
    return ans;
}

int main() {

    int n, r;
    printf("Enter value of n : ");
    scanf("%d", &n);
    printf("Enter value of r : ");
    scanf("%d", &r);

    int ncr = getnCr(n, r);
    printf("ncr = %d ", ncr);

    return 0;
}

// n = 5
// r = 3

// 5! / (3! * 2!);

