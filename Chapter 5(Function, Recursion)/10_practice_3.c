#include<stdio.h>
float force(float a);

int main()
{
    float a;
    printf("Enter the value mass in kgs\n");
    scanf("%f", &a);
    printf("The value of force  in Newton is  %f", force(a));

    return 0;
}
float force(float a)
{
    float d = a * 9.8;
    return d;
}