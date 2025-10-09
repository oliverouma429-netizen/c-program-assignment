//simple display program for number guessing game 
/*
Name: Oliver Ouma
Reg No:CT101/G/29075/25
Description:A simple program display for guessing game 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
   int secret, guess, attempts =0;
   
   srand(time(0));
   secret = rand() % 20 + 1;
   
   do {
    printf("Enter your guess (1-20): ");
    scanf("%d", &guess);
    attempts++;
    
    if(guess > secret) {
       printf("Too high!\n");
     } else if (guess < secret) {
          printf("Too low!\n");
     } else {
        printf("Congratulations !\n");
     }   
     
     } while (guess !=secret);
     
     printf("You guessed it in %d attempts.\n");
    return 0;
}