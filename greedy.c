#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
//int const q = 25;
//int const d = 10;
//int const n = 5;
//int const p = 1;

float userInput = 0;
int balance = 0;
int coincount = 0;

//Ask for input
    printf("O hai! How much change is owed?\n");
        userInput = GetFloat();
        
//If user input is less than or equal to zero loop and retry
    while (userInput <= 0) {
     printf("retry\n");
       userInput = GetFloat();
    }
    balance = (int)round(userInput * 100.0);
    
    
    //refactoring to get shortest lines of codes
   while (balance > 0){
       if ((balance - 25) >= 0) {balance = balance - 25; coincount++; }
       else if ((balance - 10) >= 0) {balance = balance - 10; coincount++; }
       else if ((balance - 5) >= 0) { balance = balance - 5; coincount++; }
       else if ((balance - 1) >= 0) {balance = balance - 1; coincount++; }
   }
    

    printf("%d\n", coincount);
}
 