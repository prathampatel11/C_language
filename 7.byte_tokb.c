#include<stdio.h>
void main()
{
  float byte,kilobyte;
  
  printf("enter_the_value_of_a_byte =");
  scanf("%f",&byte);

  kilobyte = byte / 1000;
  printf("kilobyte =%f",kilobyte);

}