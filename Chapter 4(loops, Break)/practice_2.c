#include<stdio.h>

int main()
{
    int i = 10;
    for(int n = 10; n >= 1; n--)
    {
         printf("%d x %d = %d\n", i, n, i*n);
    }

    return 0;
}