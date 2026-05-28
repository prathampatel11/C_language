
#include <stdio.h>
// #how to create read only variable (constant)
#define ITEM 2
#define DAYS 7
void main()
{
    // 2d array (row)(column)
    int sales[ITEM][DAYS], total = 0;
    float average,grandtotal = 0;

    for (int row = 0; row < ITEM; row++) // outer loop
    {
        for (int column = 0; column < DAYS; column++) // inner loop
        {
            printf("enter %d dish %d day  sales data ", row + 1, column + 1);
            scanf("%d", &sales[row][column]);
        }
    }

    for (int row = 0; row < ITEM; row++) // outer loop
    {
        for (int column = 0; column < DAYS; column++)
        {
            total = total + sales[row][column];
        }
        printf("7th day % d dish total: %d \n", row + 1, total);
        grandtotal = grandtotal + total;
        total = 0;

        
    }
    printf("total sales for 7 days = %d \n", grandtotal);
    average = grandtotal / (ITEM * DAYS);
    printf("average sales per day = %.2f", average);
}
