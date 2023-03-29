#include<stdio.h>

int main()
{
    int i = 0;
    int skip = 5;
    do
    {
        i++;
        if(i != skip){
            continue;
        }
        else{
             printf("The value is %d\n", i);
        }
    } while (i < 100);
    
    

    return 0;
}