#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    printf("%d", sizeof(ptr));
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d is: ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The value stored in %d is %d\n", i, ptr[i]);
    }

    free(ptr);

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d is: ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The value stored in %d is %d\n", i, ptr[i]);
    }
    return 0;
}