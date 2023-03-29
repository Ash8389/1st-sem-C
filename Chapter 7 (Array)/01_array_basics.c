#include <stdio.h>

int main()
{
    // int marks1 = 34, marks2 = 54, marks3 = 56;
    //  printf("The marks of student 1 is: %d\n", marks1);
    //  printf("The marks of student 1 is: %d\n", marks2);
    //  printf("The marks of student 1 is: %d\n", marks3);

    int marks[3];
    marks[0] = 34, marks[1] = 54, marks[2] = 56,
    printf("The marks of student 1 is: %d\n", marks[0]);
    printf("The marks of student 1 is: %d\n", marks[1]);
    printf("The marks of student 1 is: %d\n", marks[2]);

    return 0;
}