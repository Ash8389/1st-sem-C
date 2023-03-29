#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee e1;
    struct employee *ptr = &e1;
    //    (*ptr).code = 100;  //or we can also write: ptr->code = 101;
    ptr->code = 100;
    printf("%d", *ptr);

    return 0;
}