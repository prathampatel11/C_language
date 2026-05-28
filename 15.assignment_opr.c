#include<stdio.h>
void main()
{
    int a,b;
    printf("enter_the_value_of_a =");
    scanf("%d",&a);

    printf("enter_the_value_of_b =");
    scanf("%d",&b);

    a+=b;
    printf("a=%d,b=%d",a,b);

    a-=b;
    printf("\na=%d,b=%d",a,b);
   
    a*=b;
    printf("\na=%d,b=%d",a,b);
    
    a/=b;
    printf("\na=%d,b=%d",a,b);

    a%=b;
    printf("\na=%d,b=%d",a,b);


}