#include<stdio.h>
void main()

{
    int astrik=1,count=1;
   for(int line =4;line>=1;)
    { 
    for(int space =1;space<=line;)
   {
    printf("# ");
    
    space++;
   
   }
   do
   {
    printf("* ");
    astrik++;
   }while(astrik<=count);
   count++;
   printf("\n");
   line--;
   }
      
}