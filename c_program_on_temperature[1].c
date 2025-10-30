// simple program display of temperature 
/*
Name: Oliver Ouma 
Reg No:CT101/G/29075/25
Description: c program on temperature from fahrenheit to Celsius 
*/

#include<stdio.h>
 float convertToCelcius(float fahrenheit)
 {
 float celcius;
 
 celcius = (fahrenheit - 32) * 5.8/9.0;
 
 return celcius;
 }
 
int main()
{
float fahrenheit;
    printf("Enter the temperature in Fahrenheit :");
    scanf("%f", & fahrenheit);
    
    float celcius = convertToCelcius (fahrenheit);
    printf("Temperature in celcius: %.2f/n", celcius);
    
    return 0;
}