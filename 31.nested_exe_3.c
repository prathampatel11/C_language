
#include <stdio.h>
void main()
{
    int date, month;
    printf("Enter birth date only");
    scanf("%d", &date);

    printf("Enter birth month only");
    scanf("%d", &month);

    if ((month == 4 && date >= 14) || (month == 5 && date <= 14))
    {
        printf("your zodiac sign is aries");
    }

    else if ((month == 5 && date >= 15) || (month == 6 && date <= 14))
    {
        printf("your zodiac sign is Taurus");
    }
    else if ((month == 6 && date >=15 ) || (month == 7 && date <= 15))
    {
        printf("your zodiac sign is gemini");
    }
    else if ((month == 7 && date >= 16) || (month == 8 && date <= 16))
    {
        printf("your zodiac sign is cancer");
    }
    else if ((month == 8 && date >= 17) || (month == 9 && date <= 16))
    {
        printf("your zodiac sign is leo");
    }
    else if ((month == 9 && date >= 17) || (month == 10 && date <= 16))
    {
        printf("your zodiac sign is virgo");
    }
    else if ((month == 10  && date >= 17) || (month == 11 && date <= 15))
    {
        printf("your zodiac sign is libra");
    }
    else if ((month == 11 && date >= 16) || (month == 12 && date <= 15))
    {
        printf("your zodiac sign is scorpio");
    }
    else if ((month == 12 && date >= 16) || (month == 1 && date <= 13))
    {
        printf("your zodiac sign is sagittarius");
    }
    else if ((month == 1 && date >= 14) || (month == 2 && date <= 12))
    {
        printf("your zodiac sign is capricorn");
    }
    else if ((month == 2 && date >= 13) || (month == 3 && date <= 13))
    {
        printf("your zodiac sign is aquarius");
    }
    else if ((month == 3 && date >= 14) || (month == 4 && date <= 13))
    {
        printf("your zodiac sign is Pisces");
    }
    else
    {
        printf("invalid");
    }
}
    
    
   
   
   
   
   
   
   
   
