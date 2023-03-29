#include<stdio.h>

int main()
{
    int i = 5;
    
    printf("The value of i++ is :%d\n", i++); //---> it mean first print i then add
    // i becomes 6...then it add then it print 7
    printf("The value of ++i is :%d\n", ++i); //---> it mean first add then print
    // value of i is 7 so it print 7
    printf("The value of i is :%d\n", i);

    return 0;
}