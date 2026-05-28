#include<stdio.h>
void main()
{
    int a,b,c,d;
    int result;

    printf("enter_the_value_of_a =");
    scanf("%d",& a);

    printf("enter_the_value_of_b =");
    scanf("%d",& b);

    printf("enter_the_value_of_c =");
    scanf("%d",& c);
    
    printf("enter_the_value_of_d =");
    scanf("%d",& d);
    
    result = a == c && b == d;
    printf("result =%d",result);

    result = a == b && b == c;
    printf("\nresult =%d",result);

     result = a == d && d == c;
    printf("\nresult =%d",result);

     result = b == d && b == c;
    printf("\nresult =%d",result);

     result = a < b || b > c;
    printf("\nresult =%d",result);
     
    result = a > b || c < d;
    printf("\nresult =%d",result);
    
    result =  c < d || b < c  ;
    printf("\nresult =%d",result);
    
    result = a > b || b < c;
    printf("\nresult =%d",result);
}
