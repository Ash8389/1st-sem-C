#include <stdio.h>

int main()
{
    int i = 4;
    int *f;
    f = &i;
    printf("the value of i is %d\n", i);
    printf("the value of i is %d\n", *f);
    printf("the address of i is %u\n", f);
    printf("the address of i is %u\n", &i);
    printf("the address of f is %u\n", &f);
    printf("the value of f is %d\n", *(&f));

    return 0;
}