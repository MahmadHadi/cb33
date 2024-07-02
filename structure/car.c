// create an struct for cars 
// cars -> color, name, price

#include <stdio.h>
int main() {

    struct Cars {
        char color[10]; // string 
        char name[10]; // string 
        int price;
    };

    struct Cars maruti800 = {"red", "Maruti800", 20000};

    printf("%s \n", maruti800.color);
    printf("%s \n", maruti800.name);
    printf("%d \n", maruti800.price);
    return 0;
}