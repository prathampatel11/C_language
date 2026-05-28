#include<stdio.h>
void main()

{
    int astrik =1;
   
    for (int line =5;line>=1;)
    {
     while(astrik<=line)
    {
        printf("* ");
        astrik++;
        
    } 
        printf("\n");
        astrik =1;
        line--;
    }
   
}