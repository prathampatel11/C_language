 
#include <stdio.h> 
void main()
{
    int RED,GREEN,BLUE;

    printf("enter the range of red color =");
    scanf("%d",&RED);

    printf("enter the range of green color =");
    scanf("%d",&GREEN);
     
    printf("enter the range of blue color =");
    scanf("%d",&BLUE);

    if((RED > 0 && RED < 255) &&(BLUE > 0 && BLUE < 255)&&(GREEN > 0 && GREEN < 255))
    {
        printf("it is valid color");
    }
    else
    {
        printf("it is not valid color");
    }
}