// 12.Accept a character from the keyboard and display its previous and next character in order. Ex. If the character entered is ‘d’, display “The previous character is c”, “The next character is e”
#include <stdio.h>
int main()
{
    char ch, pre, nxt;
    printf("Enter A Character :");
    scanf(" %c", &ch); // here space before %c avoids newline issues !

    pre = ch - 1;
    nxt = ch + 1;

    printf("\n The Previous Character Is %c :", pre);
    printf("\n The Next Character Is %c :", nxt);

    return 0;
}