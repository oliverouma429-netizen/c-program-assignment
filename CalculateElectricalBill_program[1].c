// simple program display for calculateElecteicalBill
/*
Name: Oliver Ouma
Reg No: CT101/G/29075/25
Description: A simple program display of CalculateElectricalBill
*/

#include<stdio.h>

float CalculateElectricalBill (int units)
{

float billAmount = 0.0;

if (units <=100)
{

billAmount = units * 10;
}

else if (units <=200)
{

billAmount = (100 * 10) + ((units - 100) * 15);
}
else
{

billAmount = (100 * 10) + (100 * 15) + ((units - 100) *20);
}

return billAmount;
}

int main ()
{

int units ;
printf("Enter the number of units consumed: ");
scanf("%d", &units);

float totalBill = CalculateElectricalBill(units);
printf("Total Electricity Bill: ksh %.2f/n", totalBill);

 return 0;
}