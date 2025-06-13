// 5. Accept two numbers and print arithmetic and harmonic mean of the two numbers. (Hint: AM=(a+b)/2, HM = ab/(a+b))
#include <stdio.h>
int main()
{
    int a, b, am, hm;
    printf("Enter Two Numbers:");
    scanf("%d%d", &a, &b);

    // arithmetic mean AM=(a+b)/2
    am = (a + b) / 2;
    // harmonic mean hm=ab/(a+b)
    hm = a * b / (a + b);
    printf("\n Arithmatic Mean IS :%d", am);
    printf("\n Harmonic Mean IS :%d", hm);

    return 0;
}
