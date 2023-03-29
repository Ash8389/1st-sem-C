#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee Ash = {100, 58.44, "Ashish"};

    printf("Code of employee 1 is: %d\n", Ash.code);
    printf("Salary of employee 1 is: %f\n", Ash.salary);
    printf("Name of employee 1 is: %s\n", Ash.name);

    return 0;
}