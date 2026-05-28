
#include<stdio.h>
void main()

{
    float time;

    printf("enter_the_time =");
    scanf("%f",&time);

if (time>=6.00 && time<=11.59)
{
    printf("GOOD MORNING");
}

else if (time>=12 && time<=17)
{
    printf("GOOD AFTERNOON");
}

else if (time>=17.01 && time<=22.00)
{
    printf("GOOD EVENING");
}

else 
{
    printf("GOOD NIGHT");
}
}