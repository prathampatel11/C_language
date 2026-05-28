#include <stdio.h>
void main()
{
    int mathematics, science, english, gujarati, hindi, computer, total;
    printf("Mathematics marks = ");
    scanf("%d", &mathematics);

    printf("Science marks = ");
    scanf("%d", &science);

    printf("English marks = ");
    scanf("%d", &english);

    printf("Gujarati marks = ");
    scanf("%d", &gujarati);

    printf("Hindi marks = ");
    scanf("%d", &hindi);

    printf("Computer marks = ");
    scanf("%d", &computer);

    if (mathematics > 35 && science > 35 && english > 35 && gujarati > 35 && hindi > 35 && computer > 35)
    {
        total = mathematics + science + english;
        if (total >= 225)
        {
            printf("congratulation!, you are eligible to apply for diploma_course");
        }
        else
        {
            printf("sorry oops!, you are not eligible to apply for diploma_course");
        }
    }
    else
    {
        printf("sorry oops!, you are not eligible to apply for diploma_course");
    }
}