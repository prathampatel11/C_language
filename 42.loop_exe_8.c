// write a program to findout power of given base and exponenet

// write a program to findout whether given number is perfect or not


#include <stdio.h>

void main() {
    int base , exponent,power = 1,start = 1;

    printf("enter the base =");
    scanf("%d",&base);

    printf("enter the exponent =");
    scanf("%d",&exponent);
  
    while(start<=exponent)
    {
     power = power * base;
     start+=1;
    }
    //  power = power * base;
    //  start+=1;

    //  power = power * base;
    //  start+=1;

    //  power = power * base;
    //  start+=1;
  

    printf("power = %d", power);
   
}