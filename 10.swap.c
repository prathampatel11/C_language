#include <stdio.h>
void main()
{
    int a, b, temp;
    printf("Enter value for a and b");
    scanf("%d %d", &a, &b);
    printf("before swap a = %d b = %d", a, b);

    
    a = a + b; 
    b = a - b; 
    a = a - b; 
    printf("\nafter swap a = %d b = %d", a, b);
    
    
}