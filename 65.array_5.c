// 9) write a program to calculate sum and average of float array statically initialized 
#include <stdio.h>

void main()
{
    
    float numbers[] = {3.5, 7.2, 4.8, 6.1, 2.9,
                        7.8, 15.3, 9.6, 4.2, 12.5,
                        18.7, 21.4, 6.9, 13.1, 10.0,
                        5.5, 8.8, 16.2, 11.7, 14.9},sum=0,average=0;

    for(int index=0;index<20;index++)
        {
            sum=numbers[index]+ sum;
        
        }
   printf("sum of array is =%.2f \n",sum );
   average = sum/20;
   printf("average of array is =%.2f \n",average); 
}