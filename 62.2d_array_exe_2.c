
#include <stdio.h>
#define ROW 3
#define COLUMN 3
void main()
{
    int P [ROW][COLUMN]={};
    int T [ROW][COLUMN]={};
    int A [ROW][COLUMN]={};
    
       for (int row = 0; row < ROW; row++) // outer loop
    {
        for (int column = 0; column < COLUMN; column++) // inner loop
        {
            printf("enter [%d] [%d] P table data ", row , column );
            scanf("%d", &P[row][column]);
           
           
        }
    }
       for (int row = 0; row < ROW; row++) // outer loop
    {
        for (int column = 0; column < COLUMN; column++) // inner loop
        {
            printf("enter [%d] [%d] T table data ", row , column );
            scanf("%d", &T[row][column]);
           
           
        }
    }
    
    
    
    for(int r=0;r<3;r++)
    {  
        for(int col=0;col<3;col++)
        {
            A[r][col]=P[r][col]*T[r][col];
           
        }
    }
    
     for(int r=0;r<3;r++)
    {  
        for(int col=0;col<3;col++)
        {
            printf("%10d ",A[r][col]);
        }
        printf("\n");
    }
    
}