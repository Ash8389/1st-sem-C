#include<stdio.h>

int main(){

    int a = 4, b = 2;
    printf("The value of a + b is: %d\n", a + b);
    printf("The value of a - b is: %d\n", a - b);
    printf("The value of a * b is: %d\n", a * b);
    printf("The value of a / b is: %d\n", a / b);


    int z = a * b;  //legal
    //int a * b = z;  // Illegal
    printf("The value of z is : %d\n", z); 
    
    printf("5 when divided by 2 leaves a remainder of %d\n", 5%2);
    printf("-5 when divided by 2 leaves a remainder of %d\n", -5%2);
    printf("5 when divided by -2 leaves a remainder of %d\n", 5%-2);
         //remainder takes a sign of numerator

       // printf("The value of 4 * 5 is: %d\n", (4)(5)); --> will not return 20
       printf("The value of 4 * 5 is: %d\n", 4 * 5); // --> this will return 20

       // There is no operator to perform exponentiation in C
        #include<math.h>  //--> Because pow is a <math.h> function
       printf("The value of 4 ^ 5 is %d\n", 4^5);  //--> It will not produce 4 to the power 5
       printf("The value of 4 ^ 5 is %f\n", pow(4 ,5));//--> It will produce 4 to the power 5



       
    return 0;
}