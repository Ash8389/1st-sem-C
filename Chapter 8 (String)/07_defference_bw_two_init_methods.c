#include <stdio.h>

int main()
{
    // char ptr[] = "Rohan Bhai"; ---->This is not able to change the name Rohan Bhai to Subham Bhai
    char *ptr = "Rohan Bhai"; // ---->This is able to change the name Rohan Bhai to Subham Bhai
    ptr = "Subham Bhai";
    printf("%s", ptr);

    return 0;
}