
// 4) write a program to count vowels, consonant and digits and words in given string 

#include <stdio.h>
#include <string.h>
void main()
{
    char text[256];
    int digit = 0, vowel = 0, consonant = 0, word = 1;
    printf("Enter one line text");
    gets(text);
    
    for (int line = 0; text[line] != '\0'; line++)
    {
        if (text[line] >= '0' && text[line] <= '9')
        {
            digit++;
        }
        else if (text[line] == 'a' || text[line] == 'e' || text[line] == 'i' || text[line] == 'o' || text[line] == 'u' ||
                 text[line] == 'A' || text[line] == 'E' || text[line] == 'I' || text[line] == 'O' || text[line] == 'U')
        {
            vowel++;
        }
        else if ((text[line] >= 'a' && text[line] <= 'z') || (text[line] >= 'A' && text[line] <= 'Z'))
        {
            consonant++;
        }
        else if (text[line] == ' ')
        {
            word++;
        }

    }

    printf("Number of digits in the string:- %d\n", digit);
    printf("Number of vowels in the string:- %d\n", vowel);
    printf("Number of consonants in the string:- %d\n", consonant);
    printf("Number of words in the string:- %d\n", word);

}
   
        