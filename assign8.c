// 8. The basic salary of an employee is decided at the time of employment, which may be different for different employees. Apart from basic, employee gets 10% of basic as house rent, 30% of basic as dearness allowance. A professional tax of 5% of basic is deducted from salary. Accept the employee id and basic salary for an employee and output the take home salary of the employee
#include <stdio.h>
int main()
{
    float bs, totalSalary, da, hra, tax, homesalary;
    int id;
    printf("Enter Emp Id With Emp Salary :");
    scanf("%d%f", &id, &bs);

    // not taking input for da,hra,tax cause values are alredy fixed which are as follows:
    hra = 0.10 * bs;
    da = 0.30 * bs;
    tax = 0.05 * bs;
    totalSalary = bs + hra + da - tax;
    homesalary = totalSalary;

    printf("\n ID              :%d", id);
    printf("\n Home Salary     :%.2f", homesalary);

    return 0;
}
