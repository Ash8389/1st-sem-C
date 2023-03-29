#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value\n");
    scanf("%d", &n);

    for(int i = n; i < n; i--)
    {
        printf("The value is %d\n", i);
    }

    return 0;
}