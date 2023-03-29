#include<stdio.h>

int main()
{
    // int i = 4;
    // int *ptr = &i;  //---->//----> int takes 4 bytes of space

    // printf("The value of ptr is %u\n", ptr);
    // ptr++;
    // printf("The value of ptr is %u\n", ptr);
    // ptr--;
    // ptr--;
    // printf("The value of ptr is %u\n", ptr);

    char a;
    char *ptr = &a;  //----> Char takes 1 byte of space

    printf("The value of ptr is %u\n", ptr);
    ptr = ptr + 4;
    // ptr = ptr - 4;
    printf("The value of ptr is %u\n", ptr);
    ptr--;
    printf("The value of ptr is %u\n", ptr);

    return 0;
}