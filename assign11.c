// 11.Consider a room having one door and two windows both of the same size.Accept dimensions of the room, door and window. Print the area to be painted(interior walls) and area to be whitewashed (roof).
#include <stdio.h>
int main()
{
    float l, b, h;
    float doorw, doorh, winw, winh;             // door and window  width & height
    float walla, doora, windowa, painta, roofa; // area

    // taking dimension inputs
    printf("Enter Room Length ,Breadth,& Height :");
    scanf("%f%f%f", &l, &b, &h);

    printf("Enter Door Width & Height :");
    scanf("%f%f", &doorw, &doorh);

    printf("Enter Window  Width & Height :");
    scanf("%f%f", &winw, &winh);

    // formula for total area of 4 wall =2*(l+B)*h
    walla = 2 * (l + b) * h;

    // area of 1 door
    doora = doorw * doorh;

    // area of 2 window
    windowa = 2 * (winw * winh);

    // area to br painted =wall area - door -windows
    painta = walla - doora - windowa;

    // withwashed roof area = l* b
    roofa = l * b;

    printf("\n Area to be Painted (WALLS)= %.2f sq unit ", painta);
    printf("\n Area to be Painted (ROOF)= %.2f sq unit ", roofa);

    return 0;
}
