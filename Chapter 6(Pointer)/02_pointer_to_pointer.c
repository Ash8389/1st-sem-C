#include <stdio.h>

int main()
{
    int i = 4;
    int *f;
    f = &i;
    int **j = &f;
    printf("the value of i is %d\n", i);
    printf("the value of i is %d\n", *f);
    printf("the address of i is %u\n", f);
    printf("the address of i is %u\n", &i);
    printf("the address of f is %u\n", &f);
    printf("the value of f is %d\n", *(&f));
    printf("the value of f is %d\n", *j);
    printf("the address of f is %d\n", j);
    printf("the address of j is %u\n", &j);
    printf("the value of j is %d\n", *(&j));

    return 0;
}