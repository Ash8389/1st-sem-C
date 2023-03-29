#include <stdio.h>

struct complex
{
    int x;
    int y;
};

int main()
{
    struct complex c1, c2, c3, c4, c5;

    printf("Please enter real part of complex no.: ");
    scanf("%d", &c1.x, &c1.y);
    printf("Please enter imaginary part of complex no.: ");
    scanf("%d", &c1.y);
    printf("The real part of complex no. c1 is %d and imaginary part is %d\n", c1.x, c1.y);

    printf("Please enter real part of complex no.: ");
    scanf("%d", &c2.x, &c2.y);
    printf("Please enter imaginary part of complex no.: ");
    scanf("%d", &c2.y);
    printf("The real part of complex no. c1 is %d and imaginary part is %d\n", c2.x, c2.y);

    printf("Please enter real part of complex no.: ");
    scanf("%d", &c3.x, &c3.y);
    printf("Please enter imaginary part of complex no.: ");
    scanf("%d", &c3.y);
    printf("The real part of complex no. c1 is %d and imaginary part is %d\n", c3.x, c3.y);

    printf("Please enter real part of complex no.: ");
    scanf("%d", &c4.x, &c4.y);
    printf("Please enter imaginary part of complex no.: ");
    scanf("%d", &c4.y);
    printf("The real part of complex no. c1 is %d and imaginary part is %d\n", c4.x, c4.y);

    printf("Please enter real part of complex no.: ");
    scanf("%d", &c5.x, &c5.y);
    printf("Please enter imaginary part of complex no.: ");
    scanf("%d", &c5.y);
    printf("The real part of complex no. c1 is %d and imaginary part is %d\n", c5.x, c5.y);

    return 0;
}