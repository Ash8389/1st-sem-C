#include <stdio.h>
#include <string.h>

int main()
{
    char str1[30];
    char str2[30];
    char c;
    int i = 0;

    printf("Enter string 1 : ");
    scanf("%s", str1);
    printf("Enter string 2 : ");

    while (c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        str2[i] = c;

        i++;
    }
    str2[i - 1] = '\0';

    printf("String 1 is : %s\n", str1);
    printf("String 2 is : %s\n", str2);
    printf("Strcmp for these strings value is %d\n", strcmp(str1, str2));

    return 0;
}