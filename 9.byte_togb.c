#include<stdio.h>
void main()
{
  float byte,gigabyte;
  
  printf("enter_the_value_of_a_byte =");
  scanf("%f",&byte);
 
  gigabyte = byte / 1e+9;
  printf("gigabyte =%f",gigabyte);

}