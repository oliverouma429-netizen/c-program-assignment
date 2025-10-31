//a simple program for room occupy array
/*
Name: Oliver Ouma 
Reg No:CT101/G/29075/25
Description: c program on room occupy arrays 
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 
int main(){

int occupancy [5][10];
int floor,room;
int occupied,vaccant;

srand(time(0));

for (floor = 0; floor <5; floor++){
for (room = 0; room <10; room++){
occupancy [floor][room] = rand() % 2;
}
}
    printf("occupy report ( 1 = occupied , 0 = vaccant)\n");
    printf("-------------------------------------------\n");
    
    for (floor = 0; floor <5; floor++){
    occupied = 0;
    vaccant =0;
    
    printf("floor %d", floor +1);
    
    for (room =0; room <10; room++){
    printf("%d", occupancy[floor][room]);
    if(occupancy[floor][room] == 1)
    occupied++;
    else
    vaccant++;
    }
    printf("\n - > occupied: %d\n\n", occupied, vaccant);
    }
    
    return 0;
}