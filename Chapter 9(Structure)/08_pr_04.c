#include <stdio.h>

struct vector
{
    int a;
};
int main()
{
    struct vector e1;
    struct vector *ptr = &e1;

    // (*ptr).a = 5; // we also use ptr->a = 5
    ptr->a = 5;

    printf("The value of a is %d", e1.a);

    return 0;
}