#include <stdio.h>
#include <string.h>

int main()
{
    struct employee
    {
        int code;
        float salary;
        char name[30];
    };

    struct employee e1;
    {
        e1.code = 10;
        e1.salary = 45.2374;
        // e1.name = "Ashish"; --->It won't work
        strcpy(e1.name, "Ashish");
    };

    printf("%d\n", e1.code);
    printf("%.3f\n", e1.salary); //---> %.3f for three numbers after decimal
    printf("%s\n", e1.name);

    return 0;
}