#include <stdio.h>
void fun(int a);
int main()
{
    int i = 4;

    printf("The value of i is %d\n", i);
    fun(i);
    printf("The addres of i is %u\n", &i);
    return 0;
}
void fun(int a)
{
    printf("The addres of a is %u\n", &a);
}