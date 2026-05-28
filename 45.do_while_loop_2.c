#include <stdio.h>

void main() 
{
    int original_number=0,number,reminder,sum=0;

    printf("enter the number =");
    scanf("%d",&number);

    original_number = number;
    printf("%d \n", original_number);

if(number<100 || number>999)
    {
        printf("it is not armstrong number");
    }

else
    {
          do
          {
           reminder = number%10;
           reminder =reminder*reminder*reminder;
           sum =sum+reminder;
           number= number/10;
          } while(number>0);
        
    //    reminder =number%10;
    //    reminder =reminder*reminder*reminder;
    //    sum =sum+reminder;
    //    number= number/10;
       

    //    reminder =number%10;
    //    reminder =reminder*reminder*reminder;
    //    sum =sum+reminder;
    //    number= number/10;
      
    }

     
if (sum == original_number)
     {
         printf("\ngiven number is armstrong number.");
     }

else
      {   
        printf("\ngiven number is not armstrong number.");
      }
}

