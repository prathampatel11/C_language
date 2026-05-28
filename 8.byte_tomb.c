#include<stdio.h>
void main()
{
  float byte,megabyte;
  
  printf("enter_the_value_of_a_byte =");
  scanf("%f",&byte);
 
  megabyte = byte / 1e+6;
  printf("megabyte =%f",megabyte);

}