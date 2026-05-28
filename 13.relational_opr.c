#include<stdio.h>
void main()
{
    int A,B,C,result;

    printf("enter_the_value_of_a_A =");
    scanf("%d",&A);

    printf("enter_the_value_of_a_B=");
    scanf("%d",&B);

    printf("enter_the_value_of_a_C =");
    scanf("%d",&C);

    result = A==B;
    printf("result =%d",result);

    result = A!=B;
    printf("\nresult =%d",result);

    result = A<B;
    printf("\nresult =%d",result);
    
    result = A>B;
    printf("\nresult =%d",result);

    result = A<=B;
    printf("\nresult =%d",result);
    
    result = A>=B;
    printf("\nresult =%d",result);
}