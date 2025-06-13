// 1. Accept radius of a circle and print the area and circumference of circle. (Hint: area = πr2, circumference = 2πr)
#include <stdio.h>
int main()
{
    float radius, area, cference;

    // area of circle:
    printf("Enter Radius of Circle :");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("\n Area Of Circle =%.2f", area);

    // circumference of circle:
    cference = 2 * 3.14 * radius;
    printf("\n Area Of Circumference =%.2f", cference);

    return 0;
}
