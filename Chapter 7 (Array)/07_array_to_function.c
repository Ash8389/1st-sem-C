#include <stdio.h>

// void printArray(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         // printf("The value of %d is %d\n", i + 1, ptr[i]);
//         printf("The value of %d is %d\n", i + 1, *(ptr + i));
//     }
void printArray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // printf("The value of %d is %d\n", i + 1, ptr[i]);
        printf("The value of %d is %d\n", i + 1, *(ptr + i));
    }
    // ptr [0] = 999;
}

int main()
{
    int arr[] = {1, 3, 5, 6, 8, 5};
    printArray(arr, 6);
    // printf("%d", arr[0]);
    return 0;
}