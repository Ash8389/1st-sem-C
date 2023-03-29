#include <stdio.h>
int sum(int a, int b);

int main()
{
    int x = 3;
    int y = 4;
    printf("The value of x and y is %d and %d\n", x, y);
    printf("The value of x + y is %d\n", sum(x, y));
    printf("The value of x and y after function call is %d and %d\n", x, y);

    return 0;
}
int sum(int a, int b)
{
    int c;
    c = a + b;
    a = 10;
    b = 20;
    return c;
}