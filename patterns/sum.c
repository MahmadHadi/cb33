// * 1 2 3 
// * 4 5 6 
// * 7 8 9

#include <stdio.h>
void main() {
    int count = 1;

    for (int i = 1; i <= 4; i++) {
        for (int j = 1 ; j <= 4; j++) {
            printf("%.2d ", count);
            count++;
        }
        printf("\n");
    }
}

// * 1 2 3 
// * 4 5 6 
// * 7 8 9

// int count = 1

// print count // 1
// count++ // count = 2 
// print count // 2
// count++ // count 3 
// print count // 3
// count++ // count = 4

// print "\n";

// print count // 4 
// count ++ // count = 5
// print count // 5 
// count++ // count = 6
// print count // 6
// count++; // count = 7
// print "\n"

// print count // 7
// count ++ // count = 8
// print count // 8
// count++ // count = 9
// print count // 9