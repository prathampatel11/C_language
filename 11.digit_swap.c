#include <stdio.h>
void main()
{
    int number,first,last;

    printf("enter_the_number =");
    scanf("%d",&number);

   first = number / 10;
   last =number % 10;
    
   number = (last * 10) +first;

   printf("\n number =%d",number);

}