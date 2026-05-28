// 3) write a program to count digits in given string. 

#include <stdio.h>
#include <string.h>
void main()
{
    char text[256];
    int digit = 0;
    printf("Enter one line text");
    gets(text);
    

    for (int line = 0; text[line] != '\0'; line++)
    {
        if (text[line] >= '0' && text[line] <= '9')
        {
            digit++;
        }

    }
    printf("Number of digits in the string:- %d", digit);

    
}
   
        