// * 1 
// * 1 2 
// * 1 2 3 
// * 1 2 3 4 

#include <stdio.h>
void main() {
    int count = 1;
    float fl = 1.01;
    for (int i = 1; i <= 5; i++) { // row
        for (int j = 1; j <= i; j++) { // col
            // printf("%.2d ", count);
            // count++;    
            
            // *****************
            
            // printf("%d ", j);
            
            // *****************
            
            // printf("%d ", i);

            // *****************

            // printf("%c ", count + 96);
            // count++; // 1 -> 2 -> 3 -> 4 -> ...

            // *****************

            printf("%.3f ", fl);
            fl += 0.01; // 1.02 //
            // fl -= 0.01; // fl = fl - 0.01
            // fl++; // fl = fl + 1
            // fl--; // fl = fl - 1
        }
        printf("\n");
    }
}