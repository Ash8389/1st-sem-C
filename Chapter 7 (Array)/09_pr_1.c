#include<stdio.h>

int main()
{
   int arr [10] = {1,2,3,4,5,6,7,8,9,10};
// int *ptr = arr[0];
   int *ptr = arr;
    ptr = ptr + 2;

if(ptr == &arr[2])
{
 printf("These point to the same location in memory\n");
}
 else
 {
    printf("These do not point to the same location in memory\n");
 }

    return 0;
}