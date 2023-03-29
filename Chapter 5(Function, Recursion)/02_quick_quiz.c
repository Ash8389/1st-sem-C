#include<stdio.h>

void GoodMorning();
void GoodEvening();             // Function prototype
void GoodNight();

int main()
{
GoodMorning();
GoodEvening();                 // Function call
GoodNight();

    return 0;
}
void GoodMorning()
{
   printf("Good Morning AJ\n");
}
void GoodEvening()
{
   printf("Good Evening AJ\n");         // Function definition
}
void GoodNight()
{
   printf("Good Night AJ\n");
}
