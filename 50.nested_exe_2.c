
// A 
// A B 
// A B C
// A B C D
// A B C D E 

#include <stdio.h>

void main() 
{
    int code;
    for(int line=1;line<=5;line+=1){
        code=65;
        for(int count=1;count<=line;count+=1)
        {
            printf("%c \t", code);
            code+=1;
        }
        printf("\n");
    
    code=65 ;
    }
    
    

}