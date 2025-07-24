/*write a program that generates a random number and asks the player to guess
it. If the player’s guess is higher than the actual number, the program displays “Lower
number please”. Similarly, if the user’s guess is too low, the program prints “Higher
number please”.
When the user guesses the correct number, the program displays the number of
guesses the player used to arrive at the number.*/
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
