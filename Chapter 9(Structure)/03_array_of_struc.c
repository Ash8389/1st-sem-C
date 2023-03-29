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
    struct employee facebook[100];

    facebook[0].code = 100;
    facebook[0].salary = 5000.57;
    strcpy(facebook[0].name, "Ashish");

    facebook[1].code = 100;
    facebook[1].salary = 5000.57;
    strcpy(facebook[1].name, "Ashish");

    facebook[2].code = 100;
    facebook[2].salary = 5000.57;
    strcpy(facebook[2].name, "Ashish");

    return 0;
}