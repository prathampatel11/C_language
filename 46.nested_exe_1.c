#include <stdio.h>

void main() 
{
    int line, number;
    
    for(line = 1; line <= 5; line+=1) 
    {
       
        for(number = 1; number <= line; number+=1) {
           
            if(number % 2 == 1)
                printf("1 ");
            else
                printf("0 ");
        }
        
        printf("\n");
    }
   
}