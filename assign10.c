// 10.Accept the x and y coordinates of two points and compute the distance between the two points.
#include <stdio.h>
int main()
{
    float x1, y1, x2, y2, distsqr;
    printf("Enter x1 & y1 Coordinates :");
    scanf("%f%f", &x1, &y1);

    printf("Enter x2 & y2 Coordinates :");
    scanf("%f%f", &x2, &y2);

    // using formula distsqr=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)
    distsqr = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    printf("Distance =%.2f", distsqr);

    return 0;
}
