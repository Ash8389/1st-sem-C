#include <stdio.h>

typedef struct vector
{
    int a;
    int b;
} vector;
struct vector sumvector(vector v1, vector v2)
{
    struct vector result;
    result.a = v1.a + v1.a;
    result.b = v1.b + v1.b;
    return result;
};
int main()
{
    vector v1, v2, sum;
    v1.a = 3;
    v1.b = 4;
    printf("a dim is %d and b dim is %d\n", v1.a, v1.b);

    v2.a = 5;
    v2.b = 6;
    printf("a dim is %d and b dim is %d\n", v2.a, v2.b);

    sum = sumvector(v1, v2);
    printf("Sum of x dim is %d and sum of y dim is %d", sum.a, sum.b);

    return 0;
}