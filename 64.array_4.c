//  write a program to findout minimum value from float array statically initialized 
// 9) write a program to calculate sum and average of float array statically initialized 
#include <stdio.h>

void main()
{
    
   float num[] = {12.5, 3.7, 9.8, -2.4, 7.1,3.5, 7.2, 4.8, 6.1, 2.9,
                        7.8, 15.3, 9.6, 4.2, 12.5,
                        18.7, 21.4, 6.9, 13.1, 10.0,
                        5.5, 8.8, 16.2, 11.7, 14.9},minimum =0;

        
   for(int index=0;index<5;index++)
    {
     if (minimum > num[index]) 
    {
        minimum = num[index];
        printf("minimum value=%.2f \n",minimum);
    }  
   }
}
