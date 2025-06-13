// 6. Accept three dimensions length (l), breadth(b) and height(h) of a cuboid and  print surface area and volume. (Hint: surface area=2(lb + lh +bh), volume = lbh)
#include <stdio.h>
int main()
{
    float l, b, h, sa, v;
    printf("Enter three dimensions length (l), breadth(b) and height(h) of a cuboid:");
    scanf("%f%f%f", &l, &b, &h);
    // surface area=2(lb + lh +bh)
    sa = 2 * (l * b + l * h + b * h);
    // volume = lbh
    v = l * b * h;
    printf("\n Surface area :%f", sa);
    printf("\n Volume is :%f", v);

    return 0;
}
