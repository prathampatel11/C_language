
#include<stdio.h>
void main()
{
   int shape_1_area, shape_2_area, length_1, width_1, length_2, width_2;

   printf("enter_the_shape_1_length =");
   scanf("%d",&length_1);

   printf("enter_the_shape_1_width =");
   scanf("%d",&width_1);

   printf("enter_the_shape_2_length =");
   scanf("%d",&length_2);

   printf("enter_the_shape_2_width =");
   scanf("%d",&width_2);

    shape_1_area = length_1 * width_1;

    shape_2_area = length_2 * width_2;

if(shape_1_area>shape_2_area)
{
    printf("shape_2_is_lessar_than_shape_1");
}
else
{
    printf("shape_1_is_lessar_than_shape_2");
}
}