#include <stdio.h>
#include <string.h>
int main() {
    // char ch[] = {'h', 'a', 'd', 'i', 'a', 'b', 'c'};

    // for (int i = 0; i < sizeof(ch); i++) {
    //     printf("%c", ch[i]);
    // }


    char name[] = "hadi\0 nayani "; // \0 = .; loop -> break; => str -> \0
    // printf("%c ", name[0]);
    // printf("%c ", name[1]);
    // printf("%c ", name[2]);
    // printf("%c ", name[3]);

    // for (int i = 0; i < sizeof(name); i++) {
    //     printf("%c", name[i]);
    // }

    printf("%s \n", name);

    char email[1];
    // scanf("%s", &email);
    printf("Enter email : ");
    gets(email); // scanf 
    // puts("email = ", email);
    printf("email = %s \n", email);

    strcpy(email, "temp12121"); // email = "temp12121";
    printf("email = %s \n", email);

    printf("sizeof name = %d ", sizeof(name));
}