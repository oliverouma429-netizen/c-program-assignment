//program of c to output the surface area and the volume of a cylinder 
/*
Name: Oliver Ouma 
Reg No:CT101/G/29075/25
Description:A simple program to find the volume and surface area of a cylinder 
*/

#include<stdio.h>

int main()
{
float pi=3.142;
float radius, height, volume, surface_area;


printf("enter radius:");
scanf("%f",&radius);


printf("enter height:");
scanf("%f",&height);


volume =pi*radius *radius *height;
surface_area =2*pi*radius *radius +2*pi*radius *height;


printf("\n volume is %.2f", volume);
printf("\n surface-area is %.2f", surface_area);

return 0;
}