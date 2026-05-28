
#include<stdio.h>
void main()
{
    int month_number;

    printf("enter the month number=");
    scanf("%d",&month_number);

    if(month_number > 12 || month_number < 1)
    {
        printf("invalid month_number");
    }
    else if (month_number == 12 || month_number == 1 || month_number == 2)
    {
        printf("season is winter");
    }
    
    else if(month_number >=3 && month_number <= 5)
    {
        printf("season is summer");
    }

    else if(month_number >=6 && month_number <= 9)
    {
        printf("season is monsoon");
    }
    
    else
    {
        printf("season is post_monsoon");
    }
}