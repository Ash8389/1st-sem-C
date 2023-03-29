#include<stdio.h>

void GoodMorning();
void GoodEvening();             
void GoodNight();

int main()
{
GoodMorning();

    return 0;
}
void GoodMorning()
{
   printf("Good Morning AJ\n");
   GoodEvening();                 
}
void GoodEvening()
{
   printf("Good Evening AJ\n");
     GoodNight();       
}
void GoodNight()
{
   printf("Good Night AJ\n");
}
