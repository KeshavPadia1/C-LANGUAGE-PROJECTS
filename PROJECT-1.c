#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with current time
    srand(time(0));  

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;

   int guess,attempts;
   attempts =0;
   printf("enter your guess\n");
   for ( guess=0; guess != randomNumber; attempts++)
   {
    scanf("%d" , &guess);
    if(guess<randomNumber)
    printf("Guess Higher\n");
    else if(guess>randomNumber)
    printf("Guess Lower\n");
    else
    printf("You guessed right\n");
   }
   printf("you have taken %d attempts\n" , attempts);

    return 0;
}
