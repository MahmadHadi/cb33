// user - age - input -> can vote or not 
// age > 18 - return true 
// else return flase

#include <stdio.h>
#include <stdbool.h>

bool canVote(int userAge) {
    if (userAge > 18) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    bool flag = canVote(age);
    if (flag == true) {
        printf("User can vote ");
    } else {
        printf("User cannot vote ");
    }
}