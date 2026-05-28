#include <stdio.h>
void main()
{
    int age;
    float weight;
    char letter;
  
    printf("enter 1st letter of your name");
    scanf("%c",&letter);

    
    printf("enter your age");
    scanf("%d",&age);

    printf("enter your weight");
    scanf("%f",&weight);

    printf("age_=%d",age);
    printf("weight =%f",weight);
    printf("letter =%c",letter);
}