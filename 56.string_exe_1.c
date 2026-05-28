// 2) write a program to count vowels in given string. 

#include <stdio.h>
#include <string.h>
void main()
{
    char text[256];
    int vowel = 0;
    printf("Enter one line text");
    gets(text);
    puts(text);

    for (int line = 0; text[line] != '\0'; line++)
    {
        if (text[line] == 'a' || text[line] == 'e' || text[line] == 'i' || text[line] == 'o' || text[line] == 'u' ||
            text[line] == 'A' || text[line] == 'E' || text[line] == 'I' || text[line] == 'O' || text[line] == 'U')
        {
            vowel++;
        }
    }
    printf("Number of vowels in the string:- %d", vowel);

    
}
   
        