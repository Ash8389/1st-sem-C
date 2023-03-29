#include<stdio.h>
void printpatter(int n);
int main()
{
    int n = 3;
    
    printpatter(n);

    return 0;
}
void printpatter(int n)
{
    if(n == 1)
    {
        printf("*\n");
        return;
    }
      printpatter(n-1);
    for(int i = 0; i < (2*n-1); i++)
    {
        printf("*");
    }
     printf("\n");
}