#include <stdio.h>
void main()
{
    int birthdate,first,last,lucky_number;

    printf("enter_the_birthdate =");
    scanf("%d",&birthdate);

   first = birthdate / 10;
   last =birthdate % 10;
    
   lucky_number = first + last;
   printf("\nyour_lucky_number =%d",lucky_number);

}