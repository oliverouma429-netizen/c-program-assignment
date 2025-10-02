/*
Name: Oliver Ouma 
Reg No:CT101/G/29075/25
Description:c program for mobile data bundles 
*/


#include<stdio.h>
int main(){
  int choice;
  
    printf("Mobile Data Bundles purchase\n");
    printf("1. 100MB -50KES\n");
    printf("2. 500MB -200KES\n");
    printf("3. 1GB -350KES\n");
    printf("4. 2GB -600KES\n");
    
    printf("Enter your choice (1-4):");
    scanf("%d,& choice");
    
    switch(choice){
      case 1:
         printf("Your selected 100MB. Cost: 50KES\n");
      case 2:
         printf("Your selected 500MB. Cost: 200KES\n");
      case 3:
         printf("Your selected 1GB. Cost: 350KES\n");
      case 4:
         printf("Your selected 2GB. Cost:600KES\n");
         break;
      default:
         printf("Invalid choice\n");
      }   
    return 0;
    {
    }
}