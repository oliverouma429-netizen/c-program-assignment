// simple program display of calculateFare
/*
Name: Oliver Ouma 
Reg No:CT101/G/29075/25
Description: c program on calculateFare
*/

#include<stdio.h>
 float calculatefare (float distance)
 {
 float fare;
 
 fare = distance * 50;
 
 return fare;
 }
 
int main()
{
float distance ;
    printf("Enter the distance traveled in kilometers:");
    scanf("%f", & distance);
    
    float totalfare = calculatefare (distance);
    printf("Total fare: ksh %.2f/n", totalfare);
    
    return 0;
}