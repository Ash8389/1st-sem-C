#include <stdio.h>
void fun(int *a);
int main()
{
    int i = 4;
    printf("The value of i is %d\n", i);
    fun(&i);

    return 0;
}
void fun(int *a)
{
    printf("10X of i is %d\n", 10 * *a);
}