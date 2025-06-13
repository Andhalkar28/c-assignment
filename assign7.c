// Accept two integers from the user and interchange them. Display the interchanged numbers. Using temporary variable Without using temporary  variable
// a. Using + and – operator
// b. Using / and * operator
#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter Two Numbers:");
    scanf("%d%d", &a, &b);

    temp = a;
    a = b;
    b = temp;
    printf("\n After Swapping:a=%d ,b=%d ", a, b);

    // a. Using + and – operator

    a = a + b;
    b = a - b;
    a = a - b;
    printf("\n Swapping Using + and - operator:a=%d ,b=%d ", a, b);

    // b. Using / and * operator
    a = a * b;
    b = a / b;
    a = a / b;
    printf("\n Swapping Using / and * operator:a=%d ,b=%d ", a, b);

    return 0;
}
