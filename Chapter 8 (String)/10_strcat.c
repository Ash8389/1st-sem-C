#include <stdio.h>

int main()
{
    char str1[40] = "Ashish "; //---->It copy as it is, it does not give space
    char str2[] = "Jha";

    strcat(str1, str2);
    printf("Now the str1 is : %s", str1);

    return 0;
}