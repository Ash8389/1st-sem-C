#include<stdio.h>

int main()
{
    int i = 5;
    
    printf("The value of i-- is :%d\n", i--); //---> it mean first print i then subtract
    // i becomes 4...then it subtract so it print 3
    printf("The value of --i is :%d\n", --i); //---> it mean first subtract then print
    // value of i is 3 so it print 3
    printf("The value of i is :%d\n", i);


    return 0;
}