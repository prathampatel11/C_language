#include <stdio.h>
void main()
{
    int amount;
    float rate, year, intrest;

    printf("enter_the_value _of_amount =");
    scanf("%d",&amount);

    printf("enter_the_value _of_rate =");
    scanf("%f",&rate);

    printf("enter_the_value _of_year =");
    scanf("%f",&year);

    
    intrest = (amount*rate*year) / 100;
    printf("intrest =%f", intrest);
}