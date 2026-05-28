#include<stdio.h>
void main()
{
    float body_tempreture;

    printf("enter_the_body_tempreture =");
    scanf("%f",&body_tempreture);

    if(body_tempreture<=100.4)
    {
        printf("fever type = low-grade");
    }

    else if(body_tempreture<=102.2)
    {
        printf("fever type = modarate");
    }

    else if(body_tempreture<=105.8)
    {
        printf("fever type = high-grade");
    }
    else
    {
        printf("fever type = hyperpyrexia");
    }
}