// 9. A cashier has currency notes of denomination 1, 5 and 10. Accept the amount to be withdrawn from the user and print the total number of currency notes of each denomination the cashier will have to give.
#include <stdio.h>
int main()
{
    int tens, fives, ones, amount;
    printf("Enter Amount:");
    scanf("%d", &amount);

    tens = amount / 10;
    amount = amount % 10;

    fives = amount / 5;
    amount = amount % 5;

    ones = amount;

    printf("10s =%d , 5s =%d , 1s=%d", tens, fives, ones);
    return 0;
}