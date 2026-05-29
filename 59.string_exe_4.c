// 5) write a program to convert uppercase string into lower case string. 
// 6) write a program to convert lowercase letter into uppercase and uppercase letter into lowercase. 
//    line = Good Morning 
//    line2 = gOOD mORNING

#include <stdio.h>
#include <string.h>
void main()

{
    char upper[128], lower[128];
    int ascii, position;

    printf("Enter one line of text: ");
   gets(upper);
   fflush(stdin);
    for (position = 0; upper[position] != '\0'; position++) {
          ascii = upper[position];
          
          if (ascii >= 65 && ascii <= 90) 
          {
                lower[position] = ascii + 32;
          }
    
          else 
          {
                lower[position] = ascii;
          }
     }
     lower[position] = '\0';
    
     printf("Converted text: %s\n", lower);
   
}

   
        
