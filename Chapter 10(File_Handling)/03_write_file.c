#include <stdio.h>

int main()
{
    FILE *ptr;
    int a;
    printf("Enter the no. you want to store in file: ");
    scanf("%d", &a);
    ptr = fopen("03_write_file.txt", "w");
    fprintf(ptr, "Hello\n");
    fprintf(ptr, "%d", a);
    fclose(ptr);
    return 0;
}