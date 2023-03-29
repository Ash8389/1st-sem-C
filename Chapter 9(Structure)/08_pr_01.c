#include <stdio.h>
struct vector
{
    int X;
    int Y;
};
int main()
{
    struct vector e1, e2;
    e1.X = 1;
    e1.Y = 2;
    printf("X dim is %d and Y dim is %d\n", e1.X, e1.Y);

    e2.X = 3;
    e2.Y = 4;
    printf("X dim is %d and Y dim is %d\n", e2.X, e2.Y);

    return 0;
}