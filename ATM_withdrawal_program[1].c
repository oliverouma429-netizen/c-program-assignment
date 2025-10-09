//ATM withdrawal program display 
/*
Name:Oliver Ouma 
Reg No:CT101/G/29075/25
Description:A simple program display for ATM withdrawal 

*/
#include<stdio.h>

int main(){
int balance, withdraw;

    printf("Enter initial account balance:");
    scanf("%d",&balance);
    
    while (balance>0){
    printf("Enter amount to withdrawal:");
    scanf("%d",& withdraw);
    
    balance -=withdraw;
    printf("Remaining balance: %d\n", balance);
    }
    printf("Balance is zero or negative. Transaction stopped.\n");
    
    return 0;
}