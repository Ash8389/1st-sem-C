#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;
    ptr = (int *)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value to be stored in %d is: ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value stored in i is: %d\n", ptr[i]);
    }

    printf("Enter the amount of memory you want to increase : ");
    scanf("%d", &n);

    ptr = realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value to be stored in %d is: ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value stored in %d is: %d\n", i, ptr[i]);
    }

    return 0;
}