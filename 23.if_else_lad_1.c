#include <stdio.h>
void main()
{
    int num1, num2, choice;
    float answer;

    printf("enter_1st_number");
    scanf("%d", &num1);

    printf("enter_2nd_number");
    scanf("%d", &num2);

    printf("enter_the_choice");
    scanf("%d", &choice);

    if (choice == 1)
    {
        answer = num1 + num2;
        printf("answer of addition = %f", answer);
    }
    else if (choice == 2)
    {
        answer = num1 - num2;
        printf("answer of subtraction = %f", answer);
    }
    else if (choice == 3)
    {
        answer = num1 * num2;
        printf("answer of multiplication = %f", answer);
    }
    else if (choice == 4)
    {
        answer = (float) num1 / num2;
        printf("answer of division = %f", answer);
    }
    else
    {
        printf("invalid(wrong) choice");
    }
   
}