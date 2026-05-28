
#include <stdio.h>
void main()
{
    
    float temp[31] = {14.2, 13.8, 13.5, 13.1, 12.7, 12.4, 11.9, 11.5, 11.2, 10.8, 10.5, 10.9, 11.3, 11.6, 12.1, 12.5, 12.8, 13.2, 13.5, 13.1, 12.6, 12.2, 11.8, 12.3, 12.7, 13.2, 13.6, 13.9, 13.4, 12.8, 12.2};

    float min;
    int day;
   
    min = temp[0];
    for (int count = 1; count < 31; count++)
    {
        if (temp[count] < min)
        {
            min = temp[count];
            day = count + 1;
        }
    }
    printf("coldest day temperature = %f and it was on %d", min,day);
}