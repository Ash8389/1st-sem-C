#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[20];
} emp;

void show(emp emp2)
{
    printf("Code of employee is: %d\n", emp2.code);
    printf("Salary of employee is: %f\n", emp2.salary);
    printf("Name of employee is: %s\n", emp2.name);
}

int main()
{
    emp e1;
    emp *ptr = &e1;
    ptr->code = 100;
    ptr->salary = 55.55;
    strcpy(ptr->name, "Ashish");

    show(e1);

    return 0;
}