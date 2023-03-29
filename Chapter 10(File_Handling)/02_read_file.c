#include <stdio.h>

int main()
{
    FILE *ptr;
    int a;
    ptr = fopen("02_read_file.txt", "r");

    fscanf(ptr, "%d", &a);
    printf("%d ", a);
    fscanf(ptr, "%d", &a);
    printf("%d ", a);
    fscanf(ptr, "%d", &a);
    printf("%d ", a);
    fscanf(ptr, "%d", &a);
    printf("%d ", a);

    fclose(ptr);

    return 0;
}