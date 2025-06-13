//2. Accept dimensions of a cylinder and print the surface area and volume. (Hint:surface area = 2 πr2 2πr, volume = πr2h)
#include <stdio.h>
int main()
{
    float surfacearea, volume, radius, height;

    printf("Enter Dimensions:-Radius & Height Of Cylinder :");
    scanf("%f%f", &radius, &height);

    // surface area = 2 πr2+ 2πrh
    surfacearea = 2 * 3.14 * radius * radius + 2 * 3.14 * radius * height;
    printf("\n Surface Area Is :%.2f", surfacearea);

    // volume = πr2h
    volume = 3.14 * radius * radius * height;
    printf("\n Volume is :%.2f", volume);

    return 0;
}
