#include<stdio.h>

int average(int a, int b, int c);

int main()
{
    float e;
    int a, b, c;
     printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("Enter the value of c\n");
    scanf("%d", &c);

    e = average(a, b, c);
    //printf("the value of e is %f\n", e);
    printf("The average of given numbers is %f", e/3);

    return 0;
}
int average(int a, int b, int c)
{
   int d;
   d = a + b + c;
   return d; 
}
