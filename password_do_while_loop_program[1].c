//simple display program for password do while loop 
/*
Name: Oliver Ouma 
Reg No CT101/G/29075/25
Description:A simple program display of password system for do while loop 
*/

#include<stdio.h>
#include<string.h>

int main(){
  char password[20];
  
  do {
      printf("Enter password: ");
      scanf("%s", password);
     } while(strcmp(password,"1234") != 0);

    printf("Access granted\n");
    
    return 0;
}