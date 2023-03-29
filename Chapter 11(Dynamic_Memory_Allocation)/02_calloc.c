#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    ptr = (float *)calloc(3, sizeof(float));

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the value to be stored in %d : ", i);
        scanf("%f", &ptr[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("The value stored in %d is : %f\n", i, ptr[i]);
    }

    return 0;
}