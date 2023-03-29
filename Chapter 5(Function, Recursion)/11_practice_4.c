#include<stdio.h>
int fib(int a);

int main()
{
    int a;
    printf("enter the number\n");
    scanf("%d", &a);
printf("The nth element of the Fibonacci series is %d\n", fib(a));
    return 0;
}
int fib(int a)
{
    int n;
    
    if (a == 1 || a == 2)
    {
        return 1; 
    }
    else
    {
        n = fib(a-1) + fib(a-2);
        return n;
    }
    
}