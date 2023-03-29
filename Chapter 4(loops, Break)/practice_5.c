#include<stdio.h>

int main()
{
    int i = 0, sum = 0, mul;
     
     while(i <= 10)
     {
        mul = 8*i;
        sum += mul;
        i++;
     }
      printf("The sum of the numbers occurring in the multiplication table of 8 is: %d\n", sum);

    return 0;
}