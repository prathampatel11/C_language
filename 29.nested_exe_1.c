#include<stdio.h>
void main()
{
    int year;

    printf("enter the year =");
    scanf("%d",&year);

if(year%4==0)
    {
    if (year%100==0)
    {
        if(year%400==0)
        {
            printf("year is leap year.");
        }

        else
        {
            printf("year is not leap year.");
        }

    } 
    else
    {
        printf("year is leap year.");
    }  
    }
    else
    {
        printf("year is not leap year.");
    }

}