/*
Name: Oliver Ouma 
Reg:CT101/G/29075/25
Description:A progrm on loan application 
 
*/
#include<stdio.h>
#include<math.h>

int main(){

int age;

float annual_income;

   printf("Enter your age: ");
    scanf("%d",&age);
    
    printf("Enter your annual_income: ");
    scanf("%f",&annual_income);
    
    if(age>=21 &&annual_income>=21000){
    scanf("congratulations you qualify for loan");
    }
    
    else{
    printf("unfortunately we are unable to offer to you a loan at this time");
    }
    return 0;
}