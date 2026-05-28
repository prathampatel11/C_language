#include<stdio.h>
void main()

{
    int year_1,year_2,month_1,month_2,day_1,day_2;

    printf("enter first person birthdate =");
    scanf("%d %d %d" ,&year_1, &month_1, &day_1);

    printf("enter second person birthdate =");
    scanf("%d %d %d" ,&year_2, &month_2, &day_2);

    if (year_1>year_2)
    {
        printf("2nd person is elder person");
    }

    else if (year_1==year_2)
    {
        if(month_1>month_2)
        {
            printf("2nd person is elder person");
        }

        else if (month_1==month_2)
        {
            if(day_1>day_2)
            {
                printf("2nd person is elder person");
            }

            else if(day_1==day_2)
            {
                printf("both person are same");
            }
            else
            {
                printf("1st person is elder person");
            }
        }

        else
        {
           printf("1st person is elder person");
            
        }
    }

    else
    {
           printf("1st person is elder person");
        
    }
}