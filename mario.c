#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main(void)
{
    //adding varible
    int h;
    int c = 0;
    do
{  
    //user enter number
     printf("enter a number: \n");
     h = GetInt();
     
    // looping through h
}while(h <= 0 || h > 23);

// loop for rows
for(int a = h; a > 0; a--)
{
    for(int b = 0; b < a - 1; b++)
    {
        printf(" ");
    }
    printf("#");
    c++;
    
    //loop for dashes
    for(int d = 0; d < c; d++)
    {
        printf("#");
    }
    printf("\n");
    }
    return 0;
}

