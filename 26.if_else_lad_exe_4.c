// Category	        BMI (kg/m2)	        
// -----------------------------------------------------
// Underweight	        <18.5	           
// Normal	            18.5−22.9	        
// Overweight	        23.0−24.9	        
// Obesity Class I	    25.0−29.9	        
// Obesity Class II	≥30.0	         


#include <stdio.h>
void main()

{
    float BMI,weight,height;

    printf("enter_the_person_weight =");
    scanf("%f",& weight);

    printf("enter_the_person_height =");
    scanf("%f",& height);
    
    BMI = weight / (height*height);
    
    if(BMI<18.5)
    {
        printf("person obesity_level is underweight");
    }
    
    else if(BMI<=22.9)
    {
       printf("person obesity_level is normal");
    }
    
    else if(BMI<=24.9)
    {
        printf("person obesity_level is overweight");
    }

    else if(BMI<=29.9)
    {
        printf("person obesity_level is obesity class-1");
    }

    else
    {
        printf("person obesity_level is obesity class-2");
    }
     printf("\nbmi = %f",BMI);
}