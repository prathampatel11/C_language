
#include<stdio.h>
void main()

{
    int subject_1,subject_2,subject_3,subject_4,subject_5,total;
     
    float percentage;

    printf("enter_the_subject_1_mark =");
    scanf("%d",&subject_1);

    printf("enter_the_subject_2_mark =");
    scanf("%d",&subject_2);

    printf("enter_the_subject_3_mark =");
    scanf("%d",&subject_3);

    printf("enter_the_subject_4_mark =");
    scanf("%d",&subject_4);

    printf("enter_the_subject_5_mark =");
    scanf("%d",&subject_5);

    total = subject_1 + subject_2 + subject_3 + subject_4 + subject_5;
    printf("total = %d",total);

    percentage = ((float)total / 400) * 100 ;
    printf("\npercentage = %.2f",percentage);

if (percentage>90)
   {
     printf("/ngrade = excellent");
   }

else if (percentage>80)
   {
     printf("/ngrade = A+");

   }

else if (percentage>70)
   {
     printf("/ngrade = A");

   }

else if (percentage>60)
   {
     printf("/ngrade = B");

   }
else if (percentage>50)
   {
     printf("/ngrade = C");

   }

else if (percentage>40)
   {
     printf("/ngrade = PASS");

   }
   
else
{
     printf("/ngrade = POOR");
}   
}