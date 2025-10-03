//simple program for personal details 
/*
Name: Oliver Ouma 
Reg:CT101/G/29075/25
Description:A display program for bank balance, phone number and height 
*/

#include<stdio.h>

int main()
{
int bankbalance ;
int phonenumber ;
int height ;

printf("enter your bankbalance: \n");
scanf("%d",& bankbalance);
printf("your bankbalance is %d.\n", bankbalance);

printf("enter your phonenumber: \n");
scanf("%d",& phonenumber);
printf("your phonenumber is %d.\n", phonenumber);

printf("enter your height:\n");
scanf("%d",& height);
printf("your height is %d.\n", height);

    return 0;
}