//a simple program for weekly revenue tracker array
/*
Name: Oliver Ouma 
Reg No:CT101/G/29075/25
Description: c program on multiple branches arrays 
*/

#include<stdio.h>

 
int main(){
float revenue [7], total=0,
average ;

int i;


for ( i=0; i <7; i++){
printf("Enter revenue for day %d:", i+i);
scanf("%f", &revenue[i]);
}

average = total/7;

printf("Total Weekly Revenue: %.2f\n", total);
printf("Average Daily Revenue: %.2f\n", average);
    
    return 0;
}