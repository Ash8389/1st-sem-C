#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("05_read_file_using_getc.txt", "r");
    char ch = getc(ptr);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = getc(ptr);
    }
    fclose(ptr);
    return 0;
}