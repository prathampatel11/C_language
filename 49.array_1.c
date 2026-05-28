
#include <stdio.h>
void main()
{
    
    int marks[5],sum=0,average;

   
    for (int index = 0; index < 5; index++) 
    {
        printf("Enter %d subject marks=", index + 1);
        scanf("%d", &marks[index]);
    }

    for (int index = 0; index < 5; index++)
    {
        printf("%d subject marks= %d \n ",index+1, marks[index]);
        sum = sum + marks[index];
    }
    printf("sum = %d",sum);
    average=(float)sum / 500 * 100;
    printf("\naverage = %d",average);

    
}