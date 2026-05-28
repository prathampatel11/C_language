#include <stdio.h>
void main()
{
    int hour_1, minute_1, second_1;
    int hour_2, minute_2, second_2;

    printf("Enter duration of Movie 1 (HH MM SS): ");
    scanf("%d %d %d", &hour_1, &minute_1, &second_1);

    printf("Enter duration of Movie 2 (HH MM SS): ");
    scanf("%d %d %d", &hour_2, &minute_2, &second_2);

    if (hour_1 < hour_2)
    {
        printf("movie 1 is shorter movie");
    }
    else if (hour_1 == hour_2)
    {
        if (minute_1 < minute_2)
        {
            printf("movie 1 is shorter movie");
        }
        else if (minute_1 == minute_2)
        {
            if (second_1 < second_2)
            {
                printf("movie 1 is shorter movie");
            }
            else if (second_1 == second_2)
            {
                printf("both movie is of same duration ");
            }
            else
            {
                printf("movie 2 is shorter movie");
            }
        }
        else
        {
            printf("movie 2 is shorter movie");
        }
    }
    else
    {
        printf("movie 2 is shorter movie");
    }
}