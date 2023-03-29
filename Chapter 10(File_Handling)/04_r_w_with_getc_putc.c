#include <stdio.h>

int main()
{
    FILE *ptr;
    // char ch;
    // ptr = fopen("04_getc_putc.txt", "r");

    // // ch = fgetc(ptr);
    // // printf("%c", ch);
    // // ch = fgetc(ptr);
    // // printf("%c", ch);
    // // ch = fgetc(ptr);
    // // printf("%c", ch);
    // // ch = fgetc(ptr);
    // // printf("%c", ch);
    // while (ch != EOF)
    // {
    //     ch = fgetc(ptr);
    //     printf("%c", ch);
    // }
    ptr = fopen("04_putc.txt", "w");
    fputc('H', ptr);
    fputc('i', ptr);
    fputc('i', ptr);
    fclose(ptr);

    return 0;
}