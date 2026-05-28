#include<stdio.h>
void main()
{
    float weight_1,weight_2,weight_3;

    printf("enter first person weight =");
    scanf("%f",&weight_1);

    printf("enter second person weight =");
    scanf("%f",&weight_2);

    printf("enter third person weight =");
    scanf("%f",&weight_3);
  
    if(weight_1==weight_2)
    { 
        if(weight_2==weight_3)
       {  
           printf("All three persons are equal");
       }
    }

   else if(weight_1>weight_2)
    {
        if(weight_1>weight_3)
        {
            printf("first person is heaviest person.");
        }

        else
        {
            printf("third person is heaviest person.");
        }
    }
    
    else
    {
        if(weight_2>weight_3)
        {            
             printf("second person is heaviest person.");
        }
        else 
        {
            printf("third person is heaviest person.");

        }
        
    }


}