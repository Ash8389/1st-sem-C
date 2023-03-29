#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if (age >= 18){
        printf("You can drive\n");
    }
    else{
        printf("You can't drive\n");
    }

    if (age==50)
    {
        printf("Half Century");
    }
    

    return 0;
}