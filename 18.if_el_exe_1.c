
#include<stdio.h>
void main()
{
   int current_year,marriege_year;
   
   printf("enter_the_current_year =");
   scanf("%d",&current_year);

   printf("enter_the_marriege_year =");
   scanf("%d",&marriege_year);

    if(marriege_year+25==current_year)
    {
        printf("this_is_your_silver_jubille_year");
    }
    else
    {
        printf("this_is_your_not_silver_jubille_year");
    }

}