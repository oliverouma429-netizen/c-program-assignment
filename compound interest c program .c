//simple program for compound interest 
/*
Name: Oliver Ouma 
Reg No:CT101/G/29075/25
Description:A compound interest program 
*/

#include<stdio.h>
#include <math.h>

int main()
{

float principle;
float rate;
float time;
int n;
float amount ;
float compoundinterest;


printf("enter principle:");
scanf("%f",& principle);


printf("enter rate:");
scanf("%f",&rate);


printf("enter time:");
scanf("%f",&time);

printf("enter n:");
scanf("%f",&n);

amount =principle*pow(1+rate/100/n, n* time);
printf("amount is %.2f\n", compoundinterest);

    return 0;
}