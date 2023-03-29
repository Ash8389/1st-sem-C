#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    printf("Enter the string : ");
    scanf("%s", str);
    int a = strlen(str);
    printf("Length of string is : %d", a);

    return 0;
}