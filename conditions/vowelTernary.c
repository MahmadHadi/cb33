// vowel code using ternary operators
#include <stdio.h>
void main()
{

    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);

    // if (ch == 'a')
    // {
    //     printf("%c is an vowel ", ch);
    // }
    // else
    // {
    //     if (ch == 'e')
    //     {
    //         printf("%c is an vowel ", ch);
    //     }
    //     else
    //     {
    //         if (ch == 'i')
    //         {
    //             printf("%c is an vowel ", ch);
    //         }
    //     }
    // }

    // ch == 'a' ? printf("%c is an vowel ", ch) : ch == 'e' ? printf("%c is an vowel ", ch)
    //                                         : ch == 'i'   ? printf("%c is an vowel ", ch)
    //                                         : ch == 'o'   ? printf("%c is an vowel ", ch)
    //                                         : ch == 'u'   ? printf("%c is an vowel ", ch)
    //                                                       : printf("%c is an consonant ", ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is an vowel ", ch);
    } else {
        printf("%c is an consonant ", ch); 
    }
}