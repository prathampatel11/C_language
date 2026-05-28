
#include <stdio.h>
#define ROW 3
#define COLUMN 3
void main()
{
    int P [ROW][COLUMN]={
        {10,11,12},
        {20,21,22},
        {30,31,32}
    };
    int T [ROW][COLUMN]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int A [ROW][COLUMN]={};
    
    for(int r=0;r<3;r++)
    {  
        for(int col=0;col<3;col++)
        {
            A[r][col]=P[r][col]+T[r][col];
           
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