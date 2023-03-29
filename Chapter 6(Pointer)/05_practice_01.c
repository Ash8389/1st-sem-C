#include <stdio.h>

int main()
{
    int a = 4;
    int *b = &a;
    printf("The address of a is %u\n", b);
    printf("The value of a is %d", *b);

    return 0;
}