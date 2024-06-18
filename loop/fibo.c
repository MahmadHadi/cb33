// * 1 1 2 3 5 8 13 21 34, ...

#include <stdio.h>
void main() {

    int first = 4;
    int second = 5;

    int ans; // 1 + 1 = 2
    printf("%d ", first);
    printf("%d ", second);

    for (int i = 1; i <= 10; i++) {
        ans = first + second;
        printf("%d ", ans);
        
        first = second;
        second = ans;
    }
}
//     ans = first + second // 1 + 1 = 2
//     printf("%d ", ans);

//     second = first; //sec = 1
//     first = ans; // first = 2

//     ans = first + second; // 2 + 1 = 3
//     printf("%d ", ans); // 3

//     second = first; // sec = 2
//     first = ans; // first = 3

//     ans = first + second; // 3 + 2 = 5
//     printf("%d ", ans);

//     second = first; // sec = 3
//     first = ans; // first = 5

//     ans = first + second; // 5 + 3 = 8
//     printf("%d ", ans);
//  // ...


// // * 4 5 9 14 23 ... 
// f = 4
// s = 5

// a = f + s => 9
// pritn f, s, a

// f = s // f = 5 
// s = a // s = 9

// a = f + s => 5 + 9 => 14 

// f = s // f = 9
// s = a // s = 14

// a = f + s -> 9 + 14 => 23

// * ----------------------------


// * 1 1 2 3 5 8 13 21 34, ...

// 1 + 1 = 2
// 2 + 1 = 3 
// 3 + 2 = 5
// 5 + 3 = 8 
// 8 + 5 = 13 ... 

// int f = 1, s = 1 
// int ans;

// ans = f + s // 1 + 1 = 2
// print ans // 2 
// f = s; // f = 1 
// s = ans ; // 2 

// ans = f + s // 1 + 2 = 3 
// print ans; // 3 
// f = s; // f = 2 
// s = ans; // s = 3

// ans = f + s // 2 + 3 // 5 
// print ans; // 5 
// f = s // f = 3 
// s = ans // s = 5 
// ... 