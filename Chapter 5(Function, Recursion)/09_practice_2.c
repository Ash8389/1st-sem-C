#include<stdio.h>

float fahrenheit(float a);

int main()
{
    int a;
    printf("Enter temperature in calcius\n");
    scanf("%d", &a);

    printf("Temperature in Fahrenheit is %f",  fahrenheit(a));

    return 0;
}
    float fahrenheit(float a)
    {
       float b;
       b = a * 9/5 + 32;
       //printf("b is %f\n", b);
       return b;
    }