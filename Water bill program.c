//program to output water bill
/*
Name: Oliver Ouma 
Reg No:CT101/G/29075/25
Description :A display program for output water bill
*/

#include<stdio.h>
int main(){
int water_units;
float bills;

    printf("Enter number of water units:");
    scanf("%d",&water_units);
    
    if(water_units>0&&water_units<=30)
    {
    bills=20*water_units;
    printf("Your total bill is %.2f",bills);
    }
    else if (water_units>60)
    {
    bills=30*water_units;
    printf("Your total bill is%.2f",bills);
    }
    
    return 0;
}