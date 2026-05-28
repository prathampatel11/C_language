#include <stdio.h>
void main()
{
    int monthly_income, annual_income;
    
    float tax, net_income;

    printf("\n Enter_monthly_income");
    scanf("%d", &monthly_income);

    annual_income = monthly_income * 12;

    if (annual_income < 1200000) 
    { tax = 0;}
            
    else if (annual_income <= 1600000)
    { tax = (annual_income * 15) / 100;}
        
    else if (annual_income <= 2000000)
    { tax = (annual_income * 20) / 100;}
      
    else if (annual_income <= 2400000)
    { tax = (annual_income * 25) / 100;}
       
    else
    { tax = (annual_income * 30) / 100;}
       
    
    net_income = annual_income - tax;
    
    printf("Gross Income %d", annual_income);
    
    printf("\nTax %.2f", tax);
    
    printf("\nNet Income %.2f", net_income);

}