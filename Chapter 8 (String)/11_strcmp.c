#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello";
    char str2[] = "Hell";

    int val = strcmp(str1, str2);
    printf("Comparison of str1 and str2 is : %d", val);

    return 0;
}