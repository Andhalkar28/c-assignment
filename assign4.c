//Accept initial velocity (u), acceleration (a) and time (t). Print the final velocity (v) and the distance (s) travelled. (Hint: v = u + at, s = u + at2)
#include <stdio.h>
int main()
{
    float velocity,distance, acceleration,time;
    printf("Enter Velocity, Acceleration,Time:");
    scanf("%f%f%f", &velocity, &acceleration,&time);

    //v=u+at
    velocity=acceleration + time;
    //s=u+a*t*t
    distance= velocity + acceleration * time *time;
    printf("\n Velocity is :%f",velocity);
    printf("\n Distance is :%f",distance);

    return 0;
}









