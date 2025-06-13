// Accept temperatures in Fahrenheit(F) and print it in Celsius(C) and Kelvin (K). (Hint: C=5/9(F- 32), K = C + 273.15)
#include <stdio.h>
int main()
{
    float fahrenheit, celcius, kelvin;

    printf("Enter Temperature In Fahrenheit Only:");
    scanf("%f", &fahrenheit);
    // C=5/9(F- 32)
    celcius = (fahrenheit - 32) * 5 / 9;
    // K = C + 273.15
    kelvin=celcius + 273.15;

    printf("\n fahrenheit to Celcius:%f",celcius);
    printf("\n fahrenheit to Kelvin:%f",kelvin);

    return 0;

}