#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

void show(struct employee emp)
{
    printf("Code of the employee is: %d\n", emp.code);
    printf("Code of the employee is: %f\n", emp.salary);
    printf("Code of the employee is: %s\n", emp.name);
};
int main()
{
    struct employee e1;
    struct employee *ptr = &e1;
    ptr->code = 100;
    ptr->salary = 500.25;
    strcpy(ptr->name, "Ashish");

    show(e1);

    return 0;
}