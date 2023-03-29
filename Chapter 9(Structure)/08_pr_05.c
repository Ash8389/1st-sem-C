#include <stdio.h>

struct complex
{
    int real;
    int img;
};
int main()
{
    struct complex e1;
    struct complex *ptr = &e1;

    ptr->real = 5;
    ptr->img = 7;

    printf("The real part of complex no. is %d and imaginary is %d", e1.real, e1.img);

    return 0;
}