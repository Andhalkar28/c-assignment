// 13.Accept a character from the user and display its ASCII value.
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter A Character :");
    scanf(" %c", &ch);

    printf("\n The ASCII Value Of '%c' is %d :", ch, ch);
    return 0;
}