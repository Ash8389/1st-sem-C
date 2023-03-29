#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("01_open_close_file.txt", "r");
    // It is good to close the file after using it
    fclose(ptr);
    return 0;
}